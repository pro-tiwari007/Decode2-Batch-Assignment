#include<iostream>
using namespace std;
int main(){
    int arr1[3][3], arr2[3][3];
    cout<<"Enter matrix 1: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter matrix 2: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of matrices is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[i][j] += arr2[i][j];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}