#include<iostream>
#include<vector>
using namespace std;

int countSubarrays(vector<int> arr,int k){
    int n = arr.size();
    int i=0,j=0;
    int score = 0,sum=0,count=0;
    while(j<n){
        sum += arr[j];
        score = sum*(j-i+1);
        while(score>=k){
            sum -= arr[i];
            i++;
            score = sum*(j-i+1); 
        }
        count += (j-i+1);
        j++;
    }
    return count;
}


int main(){
    vector<int> arr{2,1,4,3,5}; 
    cout<<"Number of subarrays: "<<countSubarrays(arr,10);
 return 0;
}