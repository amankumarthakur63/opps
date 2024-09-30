#include <iostream>
using namespace std;
class NumberOfOnes
{
    private:
    int num;
    int rem;
    int count;

    public:
    void input ()
    {
        cout << "Enter the Number : " << endl;
        cin >> num;
    }

    void display () {
        int count = 0;
        while (num > 0) {
            rem = num % 10;
            if (rem == 1) {
                count++;
            }
            num = num / 10;
        }
        cout << "Number of 1's : " << count << endl;
    }
};

int main(){
    NumberOfOnes n1;
    n1.input ();
    n1.display ();
    return 0;
}