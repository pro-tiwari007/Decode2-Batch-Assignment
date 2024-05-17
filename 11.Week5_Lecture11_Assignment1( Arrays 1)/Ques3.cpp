#include<iostream>
#include<climits>
using namespace std;
int main(){ 
    int arr[] = {11,15,21,7,34,24,2,19,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum element is: "<<min<<endl;
return 0;
}