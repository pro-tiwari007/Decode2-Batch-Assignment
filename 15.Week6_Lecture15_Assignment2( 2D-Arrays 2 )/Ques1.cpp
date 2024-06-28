#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the size of matrix: ";
    cin>>n;
    cout<<"Enter matrix: "<<endl;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Diagonal elements are: "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i || j==n-i-1){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

return 0;
}