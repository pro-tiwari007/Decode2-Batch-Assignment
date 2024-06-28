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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(matrix[i][j],matrix[n-i-1][j]);
        }

    }
    cout<<"After rotate 90 degree anti-clockwise:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}