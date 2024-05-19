#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {1,5,8,7,3,4,3,7,8,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Given array is a palindrome."<<endl;
    }
    else{
        cout<<"Given array is not a palindrome."<<endl;
    }
return 0;
}