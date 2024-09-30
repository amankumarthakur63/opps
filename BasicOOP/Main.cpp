#include <iostream>
using namespace std;
class Employee
{
    public:
    string Name;
    string Company;
    int Age;

    public:
    void inputs () {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;;
    }
};

int main(){
    Employee employee1;
    employee1.Name = "Aman";
    employee1.Company = "Google";
    employee1.Age = 20;
    employee1.inputs();    
    return 0;
}