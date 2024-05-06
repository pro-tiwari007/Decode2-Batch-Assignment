#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int *ptr1 = &n1;
    int *ptr2 = &n2;

    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"Product of two numbers: "<<(*ptr1)*(*ptr2)<<endl;
    //cout<<"Product of two numbers: "<<n1*n2<<endl;
return 0;
}