#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);

    void display()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setData(2, 5);
    c1.display();

    c2.setData(2, 7);
    c2.display();

    sum = sumComplex (c1, c2);
    sum.display ();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/