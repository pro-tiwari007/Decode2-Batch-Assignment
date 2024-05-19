#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {11,8,34,50,18,21,14,48,12,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i];
        }
    }
    cout<<"Difference("<<sumEven<<"-"<<sumOdd<<")"<<" = "<<(sumEven-sumOdd)<<endl;
return 0;
}