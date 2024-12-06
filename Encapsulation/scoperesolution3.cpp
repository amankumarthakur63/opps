#include <iostream>
using namespace std;
class Swap
{
private:
    int num1;
    int num2;
    int temp;

public:
    void input();
    void find();
};

void Swap::input()
{
    cout << "Enter two number : " << endl;
    cin >> num1 >> num2;
}

void Swap ::find()
{
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;
}
int main()
{
    Swap s;
    s.input();
    s.find();
    return 0;
}