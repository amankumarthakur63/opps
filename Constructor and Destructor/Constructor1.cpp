#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex(void);  // Constructor declaration

    void printdata()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex::Complex(void)  // ----> This is a default constructor as it takes no parameters
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c1;
    c1.printdata();
    return 0;
}