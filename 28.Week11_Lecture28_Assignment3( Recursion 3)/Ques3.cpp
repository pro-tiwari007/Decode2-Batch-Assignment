#include<iostream>
using namespace std;
int searchIndex(int arr[],int n,int idx,int target){
    if(idx == n) return -1;
    if(arr[idx] == target){
        return idx;
    }
    return searchIndex(arr,n,idx+1,target);
}
int main(){ 
    int arr[] = {4,5,8,1,9,7,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter target:: ";
    cin>>target;
    cout<<"Output:: "<<searchIndex(arr,n,0,target);

return 0;
}