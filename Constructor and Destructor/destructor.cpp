#include <iostream>
using namespace std;
int count;
class test
{
public:
    test()
    {
        count++;
        cout << "Constructor Msg : Object number : " << count << "created.." << endl;
    }
    ~test()
    {
        cout << "Constructor Msg : Object number : " << count << "destroyed.." << endl;
        count--;
    }
};

int main()
{
    cout << "Inside main block " << endl;
    cout << "creating first object.." << endl;
    test t;
    {
        cout << "Inside block1 " << endl;
        cout << "creating two object t1 and t2" << endl;
        test t1, t2;
        cout << "Leaving the block" << endl;
    }
    cout << "Back inside the main block" << endl;

    return 0;
}