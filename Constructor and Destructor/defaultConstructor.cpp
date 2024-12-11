// Constructor : It is special member function which is used to initialise an object.

// Feature of a Constructor
// 1. Its name is same as the class
// 2. It has no return type
// 3. Automatically call upon object creation

// Type of Constructor
// 1. Default constructor
// 2. Parameterised constructor
// 3. Copy Constructor

// Default constructor : Constructor without any argument is called default constructor

// Example of Default constructor

#include <iostream>
using namespace std;
class demo
{
private:
    int n;

public:
    demo()
    {
        n = 5;
    }

    void display()
    {
        cout << "Value of the n : " << n << endl;
    }
};
int main()
{
    demo d;
    d.display();
    return 0;
}
