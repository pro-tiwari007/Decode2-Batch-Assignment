#include<iostream>
#include<climits>
#include<stack>
#include<vector>
using namespace std;


int maxRectangle(vector<int> &arr){
    int n = arr.size();
    vector<int> nextSmallerIdx(n),prevSmallerIdx(n);
    stack<int> st;
    st.push(n-1);
    nextSmallerIdx[n-1] = n;
    for(int i = n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()] >= arr[i]){
            st.pop();
        }
        nextSmallerIdx[i] = (st.size()>0)?(st.top()):(n);
        st.push(i);
    }
    while(st.size()>0){
        st.pop();
    }
    st.push(0);
    prevSmallerIdx[0] = -1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()] >= arr[i]){
            st.pop();
        }
        prevSmallerIdx[i] = (st.size()>0)?(st.top()):(-1);
        st.push(i);
    }
    
    int maxArea = INT_MIN;
    for(int i=0;i<n;i++){
        int area = (arr[i])*(nextSmallerIdx[i]-prevSmallerIdx[i]-1);
        maxArea = max(area,maxArea);
    }
    return maxArea;
}


int maximalRectangle(vector<vector<char>> &arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<int> temp(n,0);
    int maxArea = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == '0'){
                temp[j] = 0;
            }
            else{
                temp[j] += 1;
            }
        }
        maxArea = max(maxArea,maxRectangle(temp));
    }
    return maxArea;
}




int main(){ 
    vector<vector<char>> arr{{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<"Given matrix :: "<<endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum area contains only 1s :: "<<maximalRectangle(arr);
 return 0;
}