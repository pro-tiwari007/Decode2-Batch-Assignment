#include<iostream>
#include <vector>
using namespace std;
int main(){ 
    int m,n;
    cout<<"Enter number of rows and columns:: ";
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int> (n));
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int start =0;
    int end =m*n-1;
    int row,col;
    bool flag = false;
    while(start<=end){
        int mid = start+(end-start)/2;
        row = mid/n;
        col = mid%n;
        if(arr[row][col]==target){
            flag = true;
            cout<<"target("<<target<<") is found.";
            break;
        }
        else if(arr[row][col]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(!flag){
        cout<<"target("<<target<<") is not found!";
    }
return 0;
}