#include <iostream>
using namespace std;

class demo
{
private:
    int n;

public:
    demo()
    {
        n = 5;
    }

    // Overload the prefix increment operator
    void operator++()
    {
        n++;
    }

    // Overload the prefix increment operator
    void operator++(int)
    {
        n++;
    }

    void display()
    {
        cout << n << endl;
    }
};

int main()
{
    demo x;
    x.display();
    ++x; // Use the prefix increment operator
    x.display();
    x++; // Use the postfix increment operator
    x.display();

    return 0;
}
