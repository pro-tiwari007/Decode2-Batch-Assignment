#include<iostream>
using namespace std;
int main(){ 
    int n ;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        
        for(int j=0;j<2*(n-i)-1;j++){
            if(j==0 || j== 2*(n-i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
return 0;
}