#include <iostream>
using namespace std;
void subArray(int a[], int n, int s)
{
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = a[i];
        for (int j = i + 1; j < n; j++)
        {

            if (curr > s)
            {
                curr = 0;
            }
            else
            {
                curr += a[j];
                if (curr == s)
                {
                    cout << i << " " << j << endl;
                    return;
                }
            }
        }
    }
}
int main()
{
    int a[] = {1, 2, 4, 7, 5};
    int n = 5, s = 12;
    subArray(a, n, s);
    for (const int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}