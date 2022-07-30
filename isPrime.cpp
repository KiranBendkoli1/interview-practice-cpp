#include<iostream>
using namespace std;

int isPrime(int num)
{
	int half = num/2;
	for(int i=2;i<=half;i++)
	{
		if(num%i==0){
			return 0;
		}
	}
	return 1;

}


int main()
{
	int n;
	cin >> n;
	if(isPrime(n))
		cout << "It is prime number"<< endl;
	else
		cout << "It is not prime "<< endl;
}