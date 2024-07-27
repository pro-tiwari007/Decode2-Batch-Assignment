#include<iostream>
using namespace std;

void sortingStrings(string arr[],int n){
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
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
    string array[] = {"rohit","aman","vishal","mohit","ishan"};
    int n = sizeof(array)/sizeof(array[0]);
    sortingStrings(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
return 0;
}