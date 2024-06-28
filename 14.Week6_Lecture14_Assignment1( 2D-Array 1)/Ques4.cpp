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
    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<"maximum element is: "<<max;
return 0;
}