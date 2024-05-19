#include<iostream>
using namespace std;
int main(){
    int element, count =0;
    int arr[] = {11,8,34,50,18,21,14,48,12,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the element: ";
    cin>>element;
    for(int i=0;i<n;i++){
        if(arr[i]>element){
            count++;
        }
    }
    cout<<"Number of elements strictly greater than "<<element<<" is: "<<count<<endl;
return 0;
}