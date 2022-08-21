#include<iostream>
using namespace std;
/*

Alice is mediator 
N seated on each chair

Alice stared providing papers with single digit number to first friend 
No. of friends = F
F[1],... F[N]
*/
int alice(int F[] , int N){
    int count = 0;
    for(int i=0;i<N-1;i++){
        if(F[0]==F[i]){
            count++;
        }
    }
    return N-count;    
}

int main()
{
    int arr[] = {1,2,3,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << alice(arr, size);
}