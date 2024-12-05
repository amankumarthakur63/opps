#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    try
    {
        if (age > 18)
        {
            cout << "Access granted" << endl;
        }
        else
        {
            throw age;
        }
    }
    catch (int n)
    {
        cout << "Access denid : age is " << n << endl;
    }

    return 0;
}