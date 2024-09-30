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

class B : public A 
{
    protected :
    int b, c;

    public :
    void getB () {
        b = 3;
    }
    void sum () {
        c = a + b;
        cout << "Sum : " << c << endl;
    }
};
int main(){
    B b1;
    b1.getA ();
    b1.getB ();
    b1.sum ();
    return 0;
}