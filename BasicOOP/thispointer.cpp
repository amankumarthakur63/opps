#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    void setX(int x)
    {
        this->x = x;
    }

    void display()
    {
        cout << "x : " << x << endl;
    }
};

int main()
{
    A a;
    a.setX(2);
    a.display();
    A b;
    a.setX(7);
    a.display();
    return 0;
}