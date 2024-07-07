#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {24,21,18,17,14,13,9,7,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    int start = 0;
    int end = n-1;
    bool flag = false;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"target("<<target<<") is found at "<<mid<<"-index"<<endl;
            break;
        }
        else if(arr[mid]>target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(!flag){
        cout<<"target("<<target<<") is not found!"<<endl;
    }
return 0;
}