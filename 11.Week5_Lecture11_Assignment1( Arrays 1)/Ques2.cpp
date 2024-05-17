#include<iostream>
#include<climits>
using namespace std;
int main(){ 
    int arr[] = {11,8,34,50,18,21,18,14,48,12,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int secMax = INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secMax = max;
            max = arr[i];
        }
        if(arr[i]>secMax && arr[i] != max){
            secMax = arr[i];
        }
    }
    cout<<"Second largest element is: "<<secMax;
return 0;
}