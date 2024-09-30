// Scope resolution operator (::) --> is used to resolve the scope of the class. It is denoted by :: symbol.

// WAP a program to swap two number

#include <iostream>
using namespace std;
class Swap
{
    private :
    int num1;
    int num2;
    int temp;

    public :
    void input ();
    void output ();
};

void Swap :: input () {
    cout << "Enter the first number : " << endl;
    cin >> num1;
    cout << "Enter the second number : " << endl;
    cin >> num2;
}

void Swap :: output () {
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
}


int main(){
    Swap s1;
    s1.input ();
    s1.output ();
}