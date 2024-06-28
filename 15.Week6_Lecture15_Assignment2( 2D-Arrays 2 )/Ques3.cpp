#include<iostream>
using namespace std;
int main(){ 
    int n; 
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int matrix[n][n];
    cout<<"Enter Matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Wave form print:"<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
return 0;
}