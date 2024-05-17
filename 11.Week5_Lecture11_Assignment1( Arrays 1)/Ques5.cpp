#include<iostream>
using namespace std;
int main(){ 
    int arr[] = {0,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i] != x){
            cout<<"Smallest missing element is: "<<arr[i-1]+1<<endl;
            flag = true;
            break;
        }
        else{
            x++;
        }
    }
    if(!flag){
            cout<<"Smallest missing element is: "<<x<<endl;
        }
return 0;
}