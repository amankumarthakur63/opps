#include <iostream>
using namespace std;
class Factorial
{
    private :
    int num;
    int result;

    public :
    void input ();
    void find ();
};

void Factorial :: input (){
    cout << "Enter the number that you want to find the factorial :" << endl;
    cin >> num;
}

void Factorial :: find () {
    result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    cout << "Result : " << result << endl;
}
int main(){
    Factorial f1;
    f1.input ();
    f1.find ();
    return 0;
}