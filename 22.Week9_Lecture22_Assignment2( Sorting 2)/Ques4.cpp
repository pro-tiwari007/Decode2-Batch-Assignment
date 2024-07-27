#include<iostream>
#include<climits>
using namespace std;

int minimumSum(int arr[], int n){
    int minIdx;
    for(int i=0;i<n-1;i++){
        minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }    
        swap(arr[i],arr[minIdx]);
    }
    int num1 = arr[0];
    for(int i=1;i<n;i++){
        num1 = num1*10 + arr[i];
    }
    for(int i=n-1;i>0;i--){
        if(arr[i] != arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int num2 = arr[0];
    for(int i=1;i<n;i++){
        num2 = num2*10 + arr[i];
    }
    return num1+num2;
}


int main(){ 
    int arr[] = {5,1,5,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minimumSum(arr,n);
return 0;
}