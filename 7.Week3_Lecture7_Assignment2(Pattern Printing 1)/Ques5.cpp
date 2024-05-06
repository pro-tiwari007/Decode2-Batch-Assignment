#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        int cond = (i<n)?(i+1):(2*n-i-1);
        for(int j=0;j<cond;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}