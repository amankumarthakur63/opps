#include <iostream>
using namespace std;
class B;

class A
{
private:
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(A, B);
};

class B
{
private:
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(A, B);
};

void add(A o1, B o2)
{
    cout << "Summing data of A and B objects gives me : " << o1.data + o2.num;
}
int main()
{
    A a;
    a.setValue(3);

    B b;
    b.setValue(5);

    add(a, b);
    return 0;
}