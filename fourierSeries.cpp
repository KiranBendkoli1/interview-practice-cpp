#include<iostream>
using namespace std;

int main()
{
	int n, n3=0, n1=0,n2=1;
	cin >> n;
	cout << 0 <<" "<< 1 << " ";
	while(n3<n)
	{
		n3 = n1+n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
}