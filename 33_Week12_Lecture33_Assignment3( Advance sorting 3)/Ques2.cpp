#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    int i=0;
    while(i<n){
        if(nums[nums[i]-1] == nums[i]){
            i++;
        }            
        else{
            swap(nums[i],nums[nums[i]-1]);
        }
    }
    for(i=0;i<n;i++){
        if(nums[i] != i+1){
            return {nums[i],i+1};
            break;
        }
    }
 return {0,0};
}


int main(){ 
    vector<int> nums{2,3,2};
    vector<int> ans = findErrorNums(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}