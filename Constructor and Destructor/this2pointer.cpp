#include <iostream>
using namespace std;
class demo
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
        cout << "X: " << x << endl;
    }
};
int main()
{
    demo d;
    d.setX(3);
    d.display();
    return 0;
}