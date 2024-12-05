

#include <iostream>
using namespace std;
class A 
{
    protected :
    int a;

    public :
    void getA ()
    {
        a = 2;
    }
};

class B : public A
{
    protected :
    int b;

    public :
    void getB ()
    {
        b = 3;
    }
};

class C : public B
{
    protected :
    int c, s;

    public :
    void getC ()
    {
        c = 4;
    }

    void sum ()
{
    s = a + b + c;
    cout << "Sum : " << s << endl;
}
};


int main(){
    C c1;
    c1.getA ();
    c1.getB ();
    c1.getC ();
    c1.sum ();
    return 0;
}