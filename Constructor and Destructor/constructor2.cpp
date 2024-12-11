#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();
    return 0;
}