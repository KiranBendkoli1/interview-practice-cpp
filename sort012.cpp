#include<iostream>
using namespace std;

void sort012(int a[], int n)
{
    int count0=0, count1=0, count2=0,index=0;
    for(int i=0;i<=n;i++)
    {
        if(a[i]==0)
            count0++;
        else if(a[i]==1)
            count1++;
        else if(a[i]==2)
            count2++;
    }
    for(int i=0;i<n;i++){
        if(count0>0){
            count0--;
            a[i]=0;
        }else if(count1>0){
            count1--;
            a[i]=1;
        }else if(count2>0){
            count2--;
            a[i]=2;
        }
    }
}

int main()
{
    int a[] = {0,2,1,2,0};
    int n=5;

    for(const int i :a){
        cout << i <<" ";
    }
    cout<<endl;
    sort012(a, n);

    for(const int i :a){
        cout << i <<" ";
    }
    cout<<endl;
    return 0;
}