#include <iostream>
using namespace std;
class bankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankDeposite()
    {
    }
    bankDeposite(int p, int y, float r);
    bankDeposite(int p, int y, int r);
    void show();
};
bankDeposite ::bankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

bankDeposite ::bankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void bankDeposite::show()
{
    cout << "Principal amount was " << principal << ". Return after year " << years << " years is " << returnValue << endl;
}
int main()
{
    bankDeposite b1, b2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, and r" << endl;
    cin >> p >> y >> r;
    b1 = bankDeposite(p, y, r);
    b1.show();
    cin >> p >> y >> R;
    b2 = bankDeposite(p, y, R);
    b2.show();
    return 0;
}