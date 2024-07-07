#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {1,2,3,3,4,4,4,5} , x = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    int index = -1;
    while(start<=end){
        int mid = start +(end - start)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                index = mid;
                break;
            } 
            else{
                start = mid+1;
            }
        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(index == -1) cout<<"No element found!"<<endl;
    else cout<<"Last occurrence of "<<x<<" is: "<<index<<endl;

return 0;
}