#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> finalPrices(vector<int> &prices){
    int n = prices.size();
    vector<int> ans(n);
    stack<int> st;
    ans[n-1] = prices[n-1];
    st.push(prices[n-1]);
    for(int i = n-2; i>=0; i--){
        while(st.size()>0 && st.top()>prices[i]){
            st.pop();
        }
        ans[i] = (st.size()>0)?(prices[i]-st.top()):(prices[i]);
        st.push(prices[i]);
    }
    return ans;
}


int main(){ 
    vector<int> arr{8,4,6,2,3};
    cout<<"Initial prices :: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    vector<int> ans = finalPrices(arr);
    cout<<"Final prices :: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 return 0;
}