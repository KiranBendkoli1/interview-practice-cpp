#include<iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[] = {2,4,7,8,9,10};
    for(const int i :arr){
        cout << i <<" ";
    }
    cout<<endl;
    int temp;
    for (int i=0; i<n;i++){
        if(i%2==0 && (i+1)<n){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(const int i :arr){
        cout << i <<" ";
    }
    cout<<endl;
}