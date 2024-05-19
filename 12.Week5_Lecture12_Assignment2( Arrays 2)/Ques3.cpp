#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {50,49,48,34,18,14,12,11,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Array is sorted in increasing order."<<endl;
    }
    else{
        flag = true;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>arr[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Array is sorted in decreasing order."<<endl;
        }
        else{
            cout<<"Array is not sorted."<<endl;
        }
    }
return 0;
}