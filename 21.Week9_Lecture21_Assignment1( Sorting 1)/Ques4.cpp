#include<iostream>
using namespace std;

void BubbleSortDecreasing(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }

}

int main(){ 
    int arr[] = {5,3,8,1,2,9,4,18,19,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSortDecreasing(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}