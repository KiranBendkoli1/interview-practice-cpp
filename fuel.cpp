#include<iostream>
using namespace std;
int getVolume(int N, int K,int priceOfContainer[], int volumeOfContainer[]){
    int volume=0;
    for(int i=N;i>=0;i--){
        if(priceOfContainer[i]<K){
            volume += volumeOfContainer[i];
        
            K-=priceOfContainer[i];
            // cout << i <<" "<< volume <<" "<< K << "\n";
        }
    }
    return volume;
}

int main()
{
    int N=5, K=105;
    int priceOfContainer[] = {10,10,40,50,90};
    int volumeOfContainer[] = {10,20,20,50,150};
    cout << getVolume(N,K,priceOfContainer,volumeOfContainer);
}