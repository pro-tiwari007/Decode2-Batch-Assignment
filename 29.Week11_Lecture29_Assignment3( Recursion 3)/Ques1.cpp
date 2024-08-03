#include<iostream>
#include<climits>
using namespace std;
int minimum(int arr[],int n,int idx,int &ans){
    if(idx == n){
        return INT_MAX;
    }
    return min(arr[idx],minimum(arr,n,idx+1,ans));
}
int main(){ 
    int arr[] = {4,5,8,1,9,7,2,3};
    cout<< "Minimum element is:: "<<minimum(arr,8,0,arr[0]);

return 0;
}