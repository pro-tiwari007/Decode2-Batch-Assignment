#include<iostream>
using namespace std;
int main(){
    int n,result=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        result*=array[i];
    }
    cout<<"Product of all elements of array is: "<<result; 
return 0;
}