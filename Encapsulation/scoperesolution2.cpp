// Scope resolution operator --> It is used to resolve the scope of the class. It is denoted by ::

#include <iostream>
using namespace std;
class Fact
{
private:
    int n;
    int f;

public:
    void input();
    void find();
};

void Fact::input()
{
    f = 1;
    cout << "Enter the number : " << endl;
    cin >> n;
}

void Fact::find()
{
    while (n >= 1)
    {
        f = f * n;
        n--;
    }
    cout << "Result : " << f << endl;
}
int main()
{
    Fact f;
    f.input();
    f.find();
    return 0;
}