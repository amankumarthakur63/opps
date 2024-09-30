// Write a program to create a class name employee with two data member name and age and two member function name getdata and printdata to enter and display and record of the employee.

#include <iostream>
using namespace std;
class employee {
    private:
    string name;
    int age;

    public:
    void getdata () {
        cout << "Enter your name please : " << endl;
        cin >> name;
        cout << "Enter your age please : " << endl;
        cin >> age;
    }

    void printdata () {
            cout << "The name of the employee : " << name << endl;
            cout << "The age of the employee : " << age << endl;
        }
};
int main(){
    employee e1;
    e1.getdata();
    e1.printdata();
    return 0;
}