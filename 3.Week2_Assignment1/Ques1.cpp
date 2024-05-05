#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a==b){
        cout<<"Both numbers are equal.";
    }
    else if(a>b){
        cout<<a<<" is greatest.";
    }
    else{
        cout<<b<<" is greatest.";
    }
return 0;
}