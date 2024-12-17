#include <iostream>
#include <fstream>
using namespace std;
class emp
{
private:
    char name[20];
    int age;
    float sal;

public:
    void getData()
    {
        cout << "Enter the name, age and sal " << endl;
        gets(name);
        cin >> age;
        cin >> sal;
    }
    void display()
    {
        cout << "Name : ";
        puts(name);
        cout << "Age : " << age << endl;
        cout << "Salary : " << sal << endl;
    }
};

int main()
{
    ofstream out;
    out.open("file.txt", ios::out);
    if (out.fail())
    {
        cout << "couldn't open" << endl;
        exit(1);
    }
    emp e;
    e.getData();
    out.write((char *)&e, sizeof(e));
    cout << "Output is writing" << endl;
    out.close();
    ifstream in;
    in.open("file.txt", ios::in);
    if (in.fail())
    {
        cout << "couldn't open" << endl;
        exit(1);
    }
    in.read((char *)&e, sizeof(e));
    e.display();
    in.close();
    return 0;
}