#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
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
    vector<int> ans;
    for(i=0;i<n;i++){
        if(nums[i] != i+1){
            ans.push_back(nums[i]);
        }
    }
 return ans;    
}

int main(){
    vector<int> arr{4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicates(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

 return 0;
}