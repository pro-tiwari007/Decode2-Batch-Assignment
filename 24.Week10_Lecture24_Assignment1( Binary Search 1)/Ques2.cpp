#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int index = -1;
    while(start<=end){
        int mid = start +(end - start)/2;
        if(arr[mid]==1){
            if(arr[mid-1] == 1){
                end = mid-1;
            } 
            else{
                index = mid;
                break;
            }
        }
        else{
            start = mid+1;
        }
    }
    if(index == -1) cout<<"Number of 1's is: 0"<<endl;
    else cout<<"Number of 1's is: "<<n-index<<endl;

return 0;
}