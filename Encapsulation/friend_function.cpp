#include <iostream>
using namespace std;
class Factorial 
{
    private :
    int num;
    int result;

    public :
    void input () {
        result = 1;
        cout << "Enter the num : " << endl;
        cin >> num;
    }

    friend void find (Factorial & f1);
};

void find (Factorial & f1){
    while (f1.num >= 1){
        f1.result = f1.result * f1.num; 
    }
    f1.num--;

    cout << "Result : " << f1.result << endl;
}
int main(){
    Factorial f2;
    f2.input ();
    find (f2);
}