// Copy constructor : used to copy va;ue of one object into another.

#include <iostream>
using namespace std;
class code
{
private:
    int id;

public:
    code()
    {
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    code a(100);
    cout << "id of a : ";
    a.display();
    code b(a);
    cout << "id of b : ";
    b.display();
    return 0;
}