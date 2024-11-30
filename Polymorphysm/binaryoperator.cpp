#include <iostream>
using namespace std;

class demo
{
private:
    int a, b;

public:
    demo()
    {
        a = 0;
        b = 0;
    }

    demo(int m, int n)
    {
        a = m;
        b = n;
    }

    // Overload the + operator
    demo operator+(const demo &d)
    {
        demo t;
        t.a = a + d.a;  // Add corresponding members
        t.b = b + d.b;  // Correct the addition for 'b'
        return t;
    }

    void display()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};

int main()
{
    demo d3(4, 5);  // Initialize d3 with a=4, b=5
    demo d4(6, 7);  // Initialize d4 with a=6, b=7
    demo d5;

    d5 = d3 + d4;  // Use the overloaded + operator to add d3 and d4
    d5.display();  // Display the result of the addition

    return 0;
}
