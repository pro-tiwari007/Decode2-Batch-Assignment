#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end,int target){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){ 
    int arr[1000];
    for(int i=1;i<1000;i++){
        arr[i] = 2*i;
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int start = 0,end = 0,x=2;
    bool flag = false;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"target("<<target<<") is found at "<<mid<<"-index"<<endl;
            break;
        }
        else if(arr[mid]>target){
            end = mid-1;
            int k = binarySearch(arr,start,end,target);
            if(k==-1){
                continue;
            }
            else{
               flag = true;
               cout<<"target("<<target<<") is found at "<<k<<"-index"<<endl;
               break; 
            }
        }
        else{
            start = mid+1;
            end = start+x;
            x*=2;
        }
    }
    if(!flag){
        cout<<"target("<<target<<") is not found!"<<endl;
    }
return 0;
}