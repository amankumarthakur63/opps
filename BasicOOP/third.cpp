// Scope resolution operator (::) used to resolve the scope of the class
// Write a program to find the factorial of a number using scope resolution operator

#include <iostream>
using namespace std;
class factorial  
{
    private:
    int num;
    int result;

    public:
    void input ();
    void find ();
};

void factorial :: input () {
    result = 1;
    cout << "Enter the number : " << endl;
    cin >> num;
}

void factorial :: find () {
    
    for (int i = 1; i <= num; i++) {
        result += num;
    }
    cout << "Result : " << result << endl;
}
int main(){
    factorial f1;
    f1.input();
    f1.find();
    return 0;
}