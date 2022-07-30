#include <iostream>
using namespace std;

int nonRepeat(int arr[], int n)
{
    int sum = 0, sumWithout = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                sumWithout += arr[i] * 2;
    }
    

    return sum - sumWithout;
}

int main()
{
    int a[] = {4, 4, 6, 5, 5};
    int n = 5;

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << nonRepeat(a, n) << endl;
    return 0;
}