#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows of matrix: ";
    cin>>m; 
    cout<<"Enter no. of columns of matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int row1,col1,row2,col2;
    cout<<"Enter first coordinates: ";
    cin>>row1>>col1;
    cout<<"Enter second coordinates: ";
    cin>>row2>>col2;
    int sum=0;
    for(int i=min(row1,row2);i<=max(row1,row2);i++){
        for(int j=min(col1,col2);j<=max(col1,col2);j++){
            sum+=arr[i][j];
        }
    }
    cout<<"Output: "<<sum;
return 0;
}