#include<iostream>
using namespace std;

// bool almostSorted(int arr[],int n){
//     int count;
//     for(int i=0;i<n;i++){
//         count=0;
//         for(int j=0;j<n;j++){
//             if(i!=j && arr[j]>arr[i]){
//                 count++;
//             }
//         }
//         if(abs((n-count-1)-i)>1){
//             return false;
//         }
//     }
//     return true;
// }

bool almostSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){ 
    int arr[] = {4,2,7,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(almostSorted(arr,n)){
        cout<<"Array is almost sorted."<<endl;
    }
    else{
        cout<<"Array is not almost sorted."<<endl;
    }

return 0;
}