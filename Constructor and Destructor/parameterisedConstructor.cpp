// Parameterised : Constructor with argument is called parameterised constructor

// Example of Parameterised constructor

#include <iostream>
using namespace std;
class point
{
private:
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    point p(1, 1);
    p.display();
    point p2(5, 10);
    p2.display();
    return 0;
}