#include<iostream>
#include<vector>
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
    bool rowZero = false;
    bool colZero = false;
    for(int i=0;i<m;i++){
        if(arr[i][0]==0){
            rowZero = true;
            break;
        }
    }
    for(int j=0;j<n;j++){
        if(arr[0][j]==0){
            colZero = true;
            break;
        }
    }
    for(int j=1;j<n;j++){
        for(int i=1;i<m;i++){
            if(arr[i][j]==0){
                arr[0][j] = 0;
                arr[i][0] = 0;
                break;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(arr[i][0]==0 || arr[0][j]==0){
                arr[i][j]=0;
            }
        }
    }
    if(rowZero){
        for(int i=0;i<m;i++){
            arr[i][0] = 0;
        }
    }
    if(colZero){
        for(int j=0;j<n;j++){
            arr[0][j] = 0;
        }
    }
    cout<<"Matrix(Set zero)::"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}