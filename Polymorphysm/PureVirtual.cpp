#include <iostream>
using namespace std;
class aman
{
public:
    virtual void example() = 0;
};
class A : public aman
{
public:
    void example()
    {
        cout << "C language book written by aman" << endl;
    }
};
class B : public aman
{
public:
    void example()
    {
        cout << "C++ lenguage book wriiten by aman" << endl;
    }
};
int main()
{
    aman *arr[2];
    A b;
    B b1;
    arr[0] = &b;
    arr[1] = &b1;

    arr[0]->example();
    arr[1]->example();
    return 0;
}