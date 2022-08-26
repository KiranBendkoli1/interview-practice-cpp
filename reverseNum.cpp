#include <iostream>
#include<math.h>
using namespace std;

int reverse(int x)
{
    long int result = 0;
    int digit;
    int count = 0, temp = x;
    while(temp != 0)
    {
        count++;
        temp /= 10;
        
    }
    // cout << count;
    count--;
    while (x != 0)
    {
        digit = x % 10;
        result += digit * pow(10, count);
        count--;
        // cout << result << endl;
        x /= 10;
    }
     if(result >= pow(2,31) || result<= pow(-2,31))
        return 0;
    return result;
}

int main()
{
    cout << reverse(-45325);
}