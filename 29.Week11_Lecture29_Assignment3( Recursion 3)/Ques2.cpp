#include<iostream>
#include<climits>
using namespace std;
int sumArrays(int arr[],int n,int idx){
    if(idx == n){
        return 0;
    }
    return arr[idx]+sumArrays(arr,n,idx+1);
}
int main(){ 
    int arr[] = {4,5,8,1,9,7,2,3};
    cout<<"Sum of elements of array:: "<< sumArrays(arr,8,0);

return 0;
}