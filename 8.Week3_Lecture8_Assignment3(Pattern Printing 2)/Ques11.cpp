#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        int cond = (i<=(2*n-1)/2)?(n-i):(i-n+2);
        for(int j=0;j<cond;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*(n-cond)-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<cond;j++){
            if((i==0 || i==2*(n-1)) && j==cond-1){
                continue;
            }
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}