#include<iostream>
using namespace std;

int minOperation(int arr[],int n){
    int idx = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            idx = i;
        }
    }
    for(int i=0;i<=idx;i++){
        arr[i] = 0;
    }
    if(idx == -1){
        return 0;
    }
    return idx+1;
}

int main(){ 
    int arr[] = {5,8,3,4,9,11,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum number of operation: "<<minOperation(arr,n)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}