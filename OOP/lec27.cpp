#include <iostream>
using namespace std;
class BasedClass 
{
    public:
    int var_base;
    void display () {
        cout << "Displaying based class variable var_base : " << var_base << endl;
    }
};

class DerivedClass 
{
    public:
    int var_derived;
    void display () {
        //cout << "Displaying Base Class variable var_base : " << var_base << endl;
        cout << "Displaying Derived Class variavle var_derived : " << var_derived << endl;
    }
};


int main(){
    BasedClass * base_class_pointer;
    BasedClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_base;
    base_class_pointer-> var_base = 34;
    base_class_pointer-> display ();
    return 0;
}