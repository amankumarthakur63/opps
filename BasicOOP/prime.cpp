#include <iostream>
using namespace std;
class prime 
{
    private:
    int c;
    int num;

    public:

    void displayResult () {
        for (int num = 2; num <=1000; num++) {
            cout << num << " " << endl;
        }
    }
    void display ()
    {
        if (num <= 1) {
            return;
        }
        int c = 2;
        while (c * c <= num) {
            if (num % c == 0) {
                cout << "Not Prime Number" <<endl;
                return;
            }
            c++;
        }
        if (c * c > num) {
            cout << "Prime Number" << endl;
        }
    }
    
};

int main(){
    prime p1;
    p1.display ();
    p1.display ();
    return 0;
}