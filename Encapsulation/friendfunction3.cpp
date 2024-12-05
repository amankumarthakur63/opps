#include <iostream>
using namespace std;
class B; 

class A
{
private:
    int val1;
    friend void exchange(A &, B &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class B
{
private:
    int val2;
    friend void exchange(A &, B &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(A &o1, B &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{
    A a;
    B b;

    a.indata (34);
    b.indata (67);
    exchange (a, b);

    cout << "The value of A after exchange becomes : " ;
    a.display ();

    cout << "The value of B after exchange becomes : " ;
    b.display ();

    return 0;
}