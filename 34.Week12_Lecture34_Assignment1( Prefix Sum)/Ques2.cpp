#include<iostream>
#include<vector>
using namespace std;

int pivotIdx(vector<int> &arr){
    int n = arr.size();
    int leftSum = 0,rightSum = 0;
    for(int i=0;i<n;i++){
        rightSum += arr[i];
    }
    for(int i=0;i<n;i++){
        rightSum -= arr[i];
        if(rightSum == leftSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}


int main(){ 
    vector<int> arr{1,7,3,6,5,6};
    cout<<"Pivot Index: "<<pivotIdx(arr)<<endl;
    
return 0;
}