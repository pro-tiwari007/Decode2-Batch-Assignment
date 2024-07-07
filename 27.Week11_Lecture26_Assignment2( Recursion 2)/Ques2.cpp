#include<iostream>
using namespace std;

int reverse(int n,int ans){
    if(n==0) return ans;
    return reverse(n/10,ans*10+(n%10));
}

void reverse(int n){
    if(n==0){
        return;
    }
    cout<<n%10;
    reverse(n/10);
}

int main(){ 
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reverse number:: ";
    cout<<reverse(n,0)<<endl;
    //reverse(n);
return 0;
}