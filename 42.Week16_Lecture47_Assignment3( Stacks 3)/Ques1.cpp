#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int callPoints(vector<string> &operations){
    int n = operations.size();
    stack<int> st;
    for(int i=0;i<n;i++){
        if(operations[i] == "+" && st.size()>1){
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.push(num1);
            st.push(num1+num2);
        }
        else if(operations[i] == "C" && st.size()>0){
            st.pop();
        }
        else if(operations[i] == "D"){
            st.push(2*st.top());
        }
        else{
            st.push(stoi(operations[i]));
        }
    }
    int ans = 0;
    while(st.size()>0){
        ans += st.top();
        st.pop();
    }
    return ans;    
}

int main(){ 
    vector<string> arr{"5","-2","4","C","D","9","+","+"};
    cout<<"Operations :: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Sum of all score :: "<<callPoints(arr);
 return 0;
}