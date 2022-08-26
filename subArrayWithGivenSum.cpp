#include<iostream>
using namespace std;
// Sub array  with given sum
void getRoomSequence(int N,int K,int goldCoinsInRooms[]){
    int left = 0, right=0, currentSum=0;
    for(int i=0;i<N;i++){
        if(currentSum==K){
            break;
        }else if(currentSum<K){
            currentSum+=goldCoinsInRooms[i];
            right++;
        }else if(currentSum>K){
            currentSum-=goldCoinsInRooms[i];
            left++;
            
        }
    }   
    cout << left << " " << right;

}
int main()
{
    int N=10, K=12;
    int goldCoinsInRooms[] = {2,3,7,14,18,1,18,4,8,3};
    getRoomSequence(N, K, goldCoinsInRooms);
}