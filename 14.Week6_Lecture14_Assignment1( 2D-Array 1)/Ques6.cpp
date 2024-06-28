#include<iostream>
using namespace std;
const int col = 5;
void displayMidElements(int matrix[][col],int row){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==row/2 || j==col/2){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter no. of rows of matrix(odd length): ";
    cin>>n;
    int arr[n][col] = {{1,2,3,4,5},{3,4,5,6,7},{7,6,5,4,3},{8,7,6,5,4},{1,2,37,8,0}};
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Display only mid elements:: "<<endl;
    displayMidElements(arr,5);
return 0;
}