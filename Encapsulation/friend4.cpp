#include <iostream>
using namespace std;
class fact
{
private:
    int n, f;

public:
    void input()
    {
        f = 1;
        cout << "Enter the number : " << endl;
        cin >> n;
    }

    friend void find(fact &f1);
};

void find(fact &f1)
{
    while (f1.n >= 1)
    {
        f1.f = f1.f * f1.n;
        f1.n--;
    }
    cout << "Result : " << f1.f << endl;
}
int main()
{
    fact f;
    f.input();
    find(f);
    return 0;
}

// #include <iostream>
// using namespace std;

// class fact {
//     private:
//         int n, f;
//     public:
//         void input() {
//             f = 1;
//             cout << "Enter the number: ";
//             cin >> n;
//         }

//         // Friend function declaration
//         friend void find(fact &f1);
// };

// // Friend function definition
// void find(fact &f1) {
//     while (f1.n >= 1) {
//         f1.f = f1.f * f1.n;  // Access 'n' using the object (f1.n)
//         f1.n--;  // Decrease n after each multiplication
//     }
//     cout << "Factorial result: " << f1.f << endl;
// }

// int main() {
//     fact f;
//     f.input();
//     find(f);
//     return 0;
// }
