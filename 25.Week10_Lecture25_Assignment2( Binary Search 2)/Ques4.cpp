#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int start = 0;
    int end = n-1;
    bool flag = false;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"Target("<<target<<") is found"<<endl;
            break;
        }
        else if(arr[start]==arr[mid] && arr[mid]==arr[end]){
            start++;
            end--;
        }
        else if(arr[mid]<=arr[end]){
            if(arr[mid]<=target && target<=arr[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        else{
            if(arr[mid]>=target && target>=arr[start]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    if(!flag){
        cout<<"Target("<<target<<") is not found"<<endl;
    }
return 0;
}