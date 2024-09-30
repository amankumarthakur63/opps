// Write a program to find sum of the following series using Encapsulation

#include <iostream>
using namespace std;
class series
{
    private:
    int i, n, s;

    public:
    void input(){
    cout << "Enter limit" << endl;
    cin >> n;
    }

    void find () {
        s = 0;
        for (int i = 1; i <= n; i++) {
            s = s + i;
        } 
        cout << "Sum : " << s << endl;
    }
};
int main(){
    series s1;
    s1.input();
    s1.find();    
    return 0;
}