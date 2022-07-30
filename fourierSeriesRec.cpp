#include<iostream>
using namespace std;

void fouriesSeries(int n,int n1,int n2){
	if((n1+n2)>n){
		return;
	}
	cout << (n1+n2)<<" ";
	fouriesSeries(n,n2,n1+n2);
}


int main()
{
	int n;
	cin >> n;
	cout << 0 <<" "<< 1 << " ";
	fouriesSeries(n,0,1);
}