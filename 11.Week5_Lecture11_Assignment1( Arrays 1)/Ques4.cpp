#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {11,8,34,50,18,21,8,18,14,48,50,12,11,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                if(flag == false){
                    cout<<"Duplicate elements are: ";
                }
                cout<<arr[i]<<" ";
                flag = true;
            }
        }
    }
    if(!flag){
        cout<<"No duplicate elements"<<endl;
    }
return 0;
}