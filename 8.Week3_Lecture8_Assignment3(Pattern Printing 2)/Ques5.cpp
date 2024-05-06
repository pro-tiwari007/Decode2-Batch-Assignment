#include<iostream>
using namespace std;
int main(){ 
    int n ;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int digit = 1;
        for(int j=0;j<n-i;j++){
            cout<<digit<<" ";
            if(i==0 && j==n-1){
                continue;
            }
            digit++;
        }
        digit--;
        for(int j=0;j<2*i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            if(i==0 && j==3){
                continue;
            }
            cout<<digit--<<" ";
        }
        cout<<endl;
    }
return 0;
}