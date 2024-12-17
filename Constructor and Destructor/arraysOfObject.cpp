#include <iostream>
using namespace std;
class employee{
    private:
    char name[30];
    float age;
    public:
    void getData();
    void putData ();
};
void employee::getData(void){
    cout << "Enter your name : " << endl;
    cin>> name;
    cout << "Enter your age : " << endl;
    cin >> age;
}
void employee::putData(void) {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}
const int size = 3;
int main(){
    employee manager[size];
    for (int i = 0; i < size; i++){
        cout << "Details about manager : " << i + 1 << endl;
        manager[i].getData();
    }
    for (int i = 0; i < size; i++){
        cout << "Manager : " << i + 1 << endl;
        manager[i].putData();
    }
    return 0;
}