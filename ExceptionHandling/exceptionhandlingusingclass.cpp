#include <iostream>
using namespace std;
class AccessControl
{
private:
    int age;

public:
    AccessControl(int age)
    {
        this->age = age;
    }
    void cheakAge()
    {
        try
        {
            if (age > 18)
            {
                cout << "Age granted " << endl;
            }
            else
            {
                throw age;
            }
        }
        catch (int n)
        {
            cout << "Age Denied : your age " << n << endl;
        }
    }
};
int main()
{
    int age;
    cout << "enter your age please " << endl;
    cin >> age;
    AccessControl access(age);
    access.cheakAge();
    return 0;
}