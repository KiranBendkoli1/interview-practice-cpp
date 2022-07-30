#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;
    int t;
    cout << "Enter the number: ";
    cin >> num;
    int original = num;

    while (num != 0)
    {
        t = num % 10;
        sum += t*t*t;
        num /= 10;
    }
    if(original == sum ) 
        cout << "It is amsrong"<<endl;
    else
        cout << "It not an amstrong number"<<endl;
}