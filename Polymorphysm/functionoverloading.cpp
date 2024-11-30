#include <iostream>
using namespace std;
class A
{
protected:
    int a, b, c;

public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << "Sum : " << c << endl;
    }
};

class B : public A
{
private:
    float d, e, f;

public:
    void sum(float x, float y)
    {
        d = x;
        e = y;
        f = d + e;
        cout << "Sum : " << f << endl;
    }
};

int main()
{
    B b;
    b.sum(4, 5);
    b.sum(12.24, 24.38);
    return 0;
}