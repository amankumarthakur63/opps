#include <iostream>
using namespace std;

int main()
{
    int a, b, s, s1, m, d, m1;
    char ch;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Display menu
L:
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Exit" << endl;

    // Ask for user choice
M:
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch)
    {
    case '1':
        s = a + b;
        cout << "Addition: " << s << endl;
        break;

    case '2':
        s1 = a - b;
        cout << "Subtraction: " << s1 << endl;
        break;

    case '3':
        m = a * b;
        cout << "Multiplication: " << m << endl;
        break;

    case '4':
        if (b != 0)
        {
            d = a / b;
            cout << "Division: " << d << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;

    case '5':
        if (b != 0)
        {
            m1 = a % b;
            cout << "Modulo: " << m1 << endl;
        }
        else
        {
            cout << "Error: Modulo by zero is not allowed." << endl;
        }
        break;

    case '6':
        cout << "Exiting the program. Goodbye!" << endl;
        return 0;

    default:
        cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        goto M;
    }

    // Ask if the user wants to perform another operation
    cout << "Do you want to perform another operation? (Y/N): ";
    
    fflush(stdin); // Flush the input buffer to remove any leftover characters
    
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        goto L; // Return to the menu if the user chooses to continue
    }
    else
    {
        cout << "Thanks for using the calculator. Goodbye!" << endl;
    }

    return 0;
}
