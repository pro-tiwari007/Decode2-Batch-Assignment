#include<iostream>
using namespace std;
int main(){ 
    int n; 
    cout<<"Enter the size of matrix: ";
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrix[i][j] = 0;
        }
    }   
    int count = 1;
    int startRow = 0;
    int startCol = 0;
    int endRow = n-1;
    int endCol = n-1;
    while(count<=n*n){
        for(int i = startCol;i<=endCol && count<=n*n;i++){
            matrix[startRow][i] = count++;
        }
        startRow++;
        for(int i = startRow;i<=endRow && count<=n*n;i++){
            matrix[i][endCol] = count++;
        }
        endCol--;
        for(int i = endCol;i>=startCol && count<=n*n;i--){
            matrix[endRow][i] = count++;
        }
        endRow--;
        for(int i = endRow;i>=startRow && count<=n*n;i--){
            matrix[i][startCol] = count++;
        }
        startCol++;
    }
    cout<<"Spiral matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Output :: [";
    for(int i=0;i<n;i++){
        cout<<"[";
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
            if(j!=n-1) cout<<",";
        }
        if(i != n-1) cout<<"],";
    }
    cout<<"]]";
return 0;
}