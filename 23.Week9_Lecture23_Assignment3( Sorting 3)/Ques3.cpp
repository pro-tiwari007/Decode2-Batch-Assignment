#include<iostream>
using namespace std;

int kthsmallest(int arr[], int n,int k){
    for(int i=0;i<k;i++){
        int minIdx = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    return arr[k-1];
}

int main(){ 
    int arr[] = {5,8,4,1,3,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<kthsmallest(arr,n,3);

return 0;
}