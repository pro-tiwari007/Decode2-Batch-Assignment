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
    int maxSum = 0;
    int rowIndex = 0;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout<<"Row having maximum sum is is:: "<<rowIndex+1<<" row[sum= "<<maxSum<<"]";
return 0;
}