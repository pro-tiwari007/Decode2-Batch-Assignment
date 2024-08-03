#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int> &arr1,vector<int> &arr2,vector<int> &ans){
    int i=0,j=0,k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>=arr2[j]){
            ans[k++] = arr1[i++];
        }
        else{
            ans[k++] = arr2[j++];
        }
    }
    if(i<arr1.size()){
        while(i<arr1.size()){
            ans[k++] = arr1[i++];
        }
    }
    else{
        while(j<arr2.size()){
            ans[k++] = arr2[j++];
        }
    }
}

void MergeSort(vector<int> &arr){
    int n = arr.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i] = arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[n1+i];
    }
    MergeSort(a);
    MergeSort(b);
    Merge(a,b,arr);
}

int main(){ 
    vector<int> arr{8,3,2,16,17,27,24,3,6,5,1,7};
    MergeSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

return 0;
}