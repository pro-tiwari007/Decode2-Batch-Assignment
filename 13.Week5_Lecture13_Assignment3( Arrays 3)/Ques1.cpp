#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {1,8,4,11,3,9,12,8,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 18;
    int count = 0;
    cout<<"Pairs are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    count++;
                }
            }
        }
    }
    cout<<"No. of triplets are: "<<count<<endl;
return 0;
}