#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Before swapping \n"
         << a << "\t" << b << endl;

    // a = 10, b=20
    a = a + b; // a = 30
    b = a - b; // b = 30-20 = 10
    a = a - b; // a = 30-10 = 20

    cout << "After swapping \n"
         << a << "\t" << b << endl;
}