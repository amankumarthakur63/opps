#include <iostream>
using namespace std;
class A 
{
    protected :
    int a;

    public :
    void getA () {
        a = 4;
    }
};

class B : virtual public A
{
    protected :
    int b;

    public :
    void getB () {
        b = 4;
    }
};

class C : virtual public A 
{
    protected :
    int c;

    public :
    void getC () {
        c = 4;
    }
};

class D : public B, public C 
{
    protected :
    int s;

    public :
    void sum () {
    s = a + b + c;
    cout << "Sum : " << s << endl;
    }
};
int main(){
    D d1;
    d1.getA ();
    d1.getB ();
    d1.getC ();
    d1.sum ();
    return 0;
}