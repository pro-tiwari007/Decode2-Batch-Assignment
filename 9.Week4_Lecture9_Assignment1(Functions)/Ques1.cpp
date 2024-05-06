#include<iostream>
using namespace std;

void nNumber_Squares(int n){
    for(int i=1;i<=n;i++){
        cout<<"square of "<<i<<": "<<i*i<<endl;
    }
}
int main(){ 
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    nNumber_Squares(n);
return 0;
}