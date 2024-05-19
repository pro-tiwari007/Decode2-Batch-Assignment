#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {1,2,8,5,3,1,2,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"Unique element: "<<arr[i]<<endl;
            break;
        }
    }
return 0;
}