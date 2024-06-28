#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {1,4,7,8,11,6,12,5,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"First repeating element is: "<<arr[i]<<endl;
                flag = true;
                break;
            }
        }
        if(flag == true){
            break;
        }
    }
    if(!flag){
        cout<<"No repeating element."<<endl;
    }
return 0;
}