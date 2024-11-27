#include <iostream>
#include <string>
using namespace std;
class binary 
{
    private:
    string s;

    public:
    void chk_bin (void);
    void read (void);
    void one_compliment (void);
    void display (void);
};

void binary::chk_bin(void) {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
        
    }
}

void binary::read(void) 
    {
        cout << "Enter the binary number" << endl;
        cin >> s;
    }

void binary::one_compliment(void) 
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}    

void binary::display(void) {
    cout << "Displating yur binary number" << endl;
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }    
}   

int main(){
    binary aman;
    aman.read();
    aman.chk_bin();
    aman.one_compliment();
    aman.display();
    return 0;
}