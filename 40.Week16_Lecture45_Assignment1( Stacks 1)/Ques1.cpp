#include<iostream>
#include<stack>
using namespace std;

int kthElementfromTop(stack<int> &st,int k){
    int ans = -1;
    stack<int> temp;
    for(int i=0;i<k-1 && st.size()>0;i++){
        temp.push(st.top());
        st.pop();
    }
    ans = (st.size() != 0)?(st.top()):(-1);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return ans;
}


int main(){ 
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    stack<int> s2;
    s2.push(s1.top()); 
    s1.pop();
    s2.push(s1.top()); 
    s1.pop();
    int k = 2;
    cout<<k<<"-position element from top is: "<<kthElementfromTop(s1,k);


 return 0;
}