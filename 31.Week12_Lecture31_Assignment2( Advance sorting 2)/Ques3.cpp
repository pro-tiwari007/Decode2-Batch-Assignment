#include<iostream>
using namespace std;

void Sorting(int arr[], int n){
    int idx = -1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx!= -1){
                swap(arr[i+1],arr[idx]);
                break;
            }
            idx = i;
        }
    }
}

int main(){ 
    int arr[] = {4,2,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sorting(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}