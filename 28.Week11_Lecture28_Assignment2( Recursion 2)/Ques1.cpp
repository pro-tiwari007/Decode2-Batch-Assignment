#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0) return 0;
    return (n%10)+sumOfDigits(n/10);
}

void sumOfDigits(int n,int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sumOfDigits(n/10,sum+(n%10));
}


int main(){ 
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Sum of the digits:: ";
    //cout<<sumOfDigits(n);
    sumOfDigits(n,0);
return 0;
}