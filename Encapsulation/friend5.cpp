#include <iostream>
using namespace std;
class Swap
{
private:
    int num1, num2, temp;

public:
    void input()
    {
        cout << "Enter the two number : " << endl;
        cin >> num1 >> num2;
    }

    friend void find(Swap &s);
};

void find(Swap &s)
{
    s.temp = s.num1;
    s.num1 = s.num2;
    s.num2 = s.temp;
    cout << "Num1 : " << s.num1 << endl;
    cout << "Num2 : " << s.num2 << endl;
}
int main()
{
    Swap s1;
    s1.input();
    find(s1);
    return 0;
}

// #include <iostream>
// using namespace std;

// class Swap {
// private:
//     int num1, num2, temp;

// public:
//     void input() {
//         cout << "Enter the two numbers: " << endl;
//         cin >> num1 >> num2;
//     }

//     friend void find(Swap &s);  // Friend function declaration
// };

// // Friend function definition
// void find(Swap &s) {
//     s.temp = s.num1;
//     s.num1 = s.num2;
//     s.num2 = s.temp;
//     cout << "Num1: " << s.num1 << endl;
//     cout << "Num2: " << s.num2 << endl;
// }

// int main() {
//     Swap s1;
//     s1.input();        // Input the numbers
//     find(s1);          // Call the friend function to Swap
//     return 0;
// }
