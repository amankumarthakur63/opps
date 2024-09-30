#include <iostream>
using namespace std;
class A 
{
    protected :
    int a;

    public :
    void getA () {
        a = 2;
    }
};

class B 
{
   protected :
    int b;

    public :
    void getB () {
        b = 2;
    } 
};

class C : public A, public B
{
    protected :
    int c, s;

    public :
    void getC () {
        c = 2;
    }
    void sum () {
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