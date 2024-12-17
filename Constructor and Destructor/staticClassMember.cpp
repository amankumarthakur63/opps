#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getData(int a)
    {
        number = a;
        count++;
    }
    void getCount()
    {
        cout << "count : " << count << endl;
    }
};

int item::count;
int main()
{
    item a, b, c;
    a.getData(2);
    b.getData(3);
    c.getData(4);
    a.getCount();
    b.getCount();
    c.getCount();
    return 0;
}