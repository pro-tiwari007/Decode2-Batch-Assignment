#include<iostream>
using namespace std;
int main(){ 
    int a=4, d=3,n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a = a+d;
    }
return 0;
}