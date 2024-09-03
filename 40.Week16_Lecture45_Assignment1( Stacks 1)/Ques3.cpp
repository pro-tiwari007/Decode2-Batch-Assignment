#include<iostream>
#include<stack>
using namespace std;

void fun(int n){
    stack<int> s;
    while(n>0){
        s.push(n%2);
        n = n/2;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}

int main(){ 
    // print binary representation of n
    fun(3);
 return 0;
}