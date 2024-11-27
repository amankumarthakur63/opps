#include <iostream>
using namespace std;
class BasedClass
{
    public:
    int var_base = 1;
    virtual void display () {
        cout << "1 Displaying Based class variable var_base " << var_base << endl;
    }
};

class DerivedClass 
{
    public:
    int var_derived = 2;
    void display () {
        //cout << "1 Displaying Based class variable var_base " << var_base << endl;
        cout << "1 Displaying Based class variable var_derived " << var_derived << endl;
    }
};

int main() 
{
    BasedClass * base_class_pointer;
    BasedClass obj_base;
    DerivedClass obj_derived;
    //BasedClass = & obj_derived;
    (*base_class_pointer).display();
    //base_class_pointer-> var_base = 34;
    //base_class_pointer->display ();
    return 0;
}