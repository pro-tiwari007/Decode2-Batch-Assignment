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
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start +(end - start)/2;
        if(arr[mid]==mid+1){
            if(arr[mid] == arr[mid+1]){
                ans = arr[mid];
                break;
            }
            start = mid+1;
        }
        else{
            ans = arr[end];
            end = mid-1;
        }
    }
    if(ans == -1) cout<<"No element found!"<<endl;
    else cout<<"Repeated element is: "<<ans<<endl;

return 0;
}