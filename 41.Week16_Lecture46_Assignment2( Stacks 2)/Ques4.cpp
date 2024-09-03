#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// vector<int> nextGreaterElements(vector<int>& nums){
//     int n = nums.size();
//     vector<int> ans(n,-1);
//     stack<int> st;
//     for(int i=0;i<2*n;i++){
//         int idx = i%n;
//         while(st.size()>0 && nums[st.top()]<nums[idx]){
//             ans[st.top()] = nums[idx];
//             st.pop();
//         }
//         st.push(idx);
//     }
//     return ans;
// }

vector<int> nextGreaterElements(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=n-1;i>=0; i--){
        st.push(nums[i]);
    }
    for(int i=n-1;i>=0; i--){
        while(st.size()>0 && st.top()<=nums[i]){
            st.pop();
        }
        if(st.size()>0){
            ans[i] = st.top();
        }
        st.push(nums[i]);
    }
    return ans;
}

int main(){ 
    vector<int> arr{8,4,6,2,3};
    cout<<"Given array :: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> ans = nextGreaterElements(arr);
    cout<<"Next greater element :: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 return 0;
}