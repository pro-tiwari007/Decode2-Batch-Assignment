#include<iostream>
#include<vector>
using namespace std;

int countNiceSubarrays(vector<int> arr,int k){
    int n = arr.size();
    int i=0,j=0,count = 0,countOdd = 0,ans=0;
    while(j<n){
        if(arr[j]%2!=0){
            count=0;
            countOdd++;
        }
        while(countOdd == k){
            count++;
            if(arr[i]%2 != 0){
                countOdd--;
            }
            i++;
        }
        ans += count;
        j++;
    }
    return ans;
}


int main(){
    vector<int> arr{2,2,2,1,2,2,1,2,2,2}; 
    cout<<"Number of nice-subarrays: "<<countNiceSubarrays(arr,2);
 return 0;
}