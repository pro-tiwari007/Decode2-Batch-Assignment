#include<iostream>
#include<stack>
using namespace std;

bool isValid(string &s){
    int n = s.size();
    stack<char> temp;
    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            temp.push(s[i]);
        }
        else if(s[i] == ')'){
            if(temp.size()>0 && temp.top() == '('){
                temp.pop();
            }
            else{
                return false;
            }
        }
        else if(s[i] == '}'){
            if(temp.size()>0 && temp.top() == '{'){
                temp.pop();
            }
            else{
                return false;
            }
        }
        else {
            if(temp.size()>0 && temp.top() == '['){
                temp.pop();
            }
            else{
                return false;
            }
        }
    }
    return temp.empty();
}

int main(){ 
    string s = "()[]{}";
    if(isValid(s)){
        cout<<s<<" is a valid string of parenthesis."<<endl;
    }
    else{
        cout<<s<<" is not a valid string of parenthesis."<<endl;
    }

 return 0;
}