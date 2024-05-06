#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=0;i<2*n;i++){
        int cond = (i<n)?(i):(2*n-i-1);
        for(int j=0;j<cond+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*(n-cond-1)-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<cond+1;j++){
            if((j==cond) && (i==n-1 || i==n)){
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}