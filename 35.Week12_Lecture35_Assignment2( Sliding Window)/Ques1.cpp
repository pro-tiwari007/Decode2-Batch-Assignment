#include<iostream>
#include<vector>
using namespace std;


int NumOfSubArrays(vector<int> &arr,int k,int threshold){
    int n = arr.size();
    int pairSum=0;
    for(int i=0;i<k;i++){
        pairSum += arr[i];
    }
    int count = 0;
    if(pairSum/k >= threshold){
        count++;
    }
    int i=1, j=k;
    while(j<n){
        pairSum -= arr[i-1];
        pairSum += arr[j];
        if(pairSum/k >= threshold){
            count++;
        }
        i++;
        j++;
    }
    return count;
}

int main(){ 
    vector<int> arr{2,2,2,2,5,5,5,8};
    cout<<"Number of subarrays: "<<NumOfSubArrays(arr,3,4);

return 0;
}