#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;

    in.open("file.txt");
    if (in.fail())
    {
        cout << "File is not opened" << endl;
        exit(1);
    }

    out.open("file.txt");
    if (out.fail())
    {
        cout << "out file is not opened" << endl;
        exit(1);
    }

    while (!in.eof())
    {
        char c;
        c = in.get();
        out.put(c);
    }

    cout << "File is copied" << endl;
    in.close();
    out.close();
    return 0;
}