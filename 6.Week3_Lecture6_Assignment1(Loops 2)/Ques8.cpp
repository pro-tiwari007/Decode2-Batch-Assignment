#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int a = 1,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n-1;i++){
        int sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
return 0;
}