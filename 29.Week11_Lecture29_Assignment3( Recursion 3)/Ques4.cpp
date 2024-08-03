#include<iostream>
using namespace std;
void reversePrint(int arr[],int n){
    if(n==0) return;
    cout<<arr[n-1]<<" ";
    reversePrint(arr,n-1);
}
int main(){ 
    int arr[] = {4,5,8,1,9,7,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Reverse print of array:: ";
    reversePrint(arr,n);

return 0;
}