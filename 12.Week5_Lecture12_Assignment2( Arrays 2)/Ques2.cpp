#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {11,8,34,50,18,21,14,48,12,49};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN,secMax = INT_MIN,thirdMax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            thirdMax = secMax;
            secMax = max;
            max = arr[i];
        }
        if(arr[i]>secMax && arr[i]!=max){
            thirdMax = secMax;
            secMax = arr[i];
        }
        if(arr[i]>thirdMax && arr[i]!=secMax && arr[i]!=max){
            thirdMax = arr[i];
        }
    }
    cout<<"Largest three elements are: "<<thirdMax<<" "<<secMax<<" "<<max<<endl;
return 0;
}