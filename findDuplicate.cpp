#include<iostream>
#include<vector>
using namespace std;


vector<int> findDuplicates(vector<int> arr)
{
// code here
    int n= arr.size();
    int cnt[n+1];
    for(int i=0;i<n+1;i++)cnt[i]=0;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        if(cnt[arr[i]]==0)
            cnt[arr[i]]=1;
        else if(cnt[arr[i]]==1)
            cnt[arr[i]]=-1;
    }
    for(int i=0;i<n+1;i++)
    {
        if(cnt[i]==-1)vec.push_back(i);
    }
return vec;
}
int main()
{
    vector<int> arr={1,2,4,5, 7, 9,6, 8,5};
    
	vector<int> dup = findDuplicates(arr);
    for (const int& i : dup) {
    cout << i << "  ";
  }
}