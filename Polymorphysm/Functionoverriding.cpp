#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "A class display method" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "B class display menthod" << endl;
    }
};
int main()
{
    A *ptr;
    B b;
    ptr = &b;
    ptr->display(); // b will display
    A a;
    ptr = &a;
    (*ptr).display(); // a will display
    return 0;
}