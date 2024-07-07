#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter number of coins: ";
    cin>>n;
    int start = 0;
    int end = n;
    int ans = -1;
    while(start<=end){
        int mid = start +(end - start)/2;
        if( mid*(mid+1)/2<=n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"Number of complete rows: "<<ans<<endl;

return 0;
}