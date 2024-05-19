#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {11,8,34,50,18,21,14,48,12,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = 2*arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}