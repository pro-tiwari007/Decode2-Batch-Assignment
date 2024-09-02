#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    cout<<"Stack :: ";
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

void removeKthElementfromTop(stack<int> &st,int k){
    stack<int> temp;
    for(int i=0;i<k-1 && st.size()>0;i++){
        temp.push(st.top());
        st.pop();
    }if(st.top()>0){
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}


int main(){ 
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    display(s1);
    int k = 4;
    removeKthElementfromTop(s1,k);
    cout<<"After removing "<<k<<"-position element from top, ";
    display(s1);

 return 0;
}