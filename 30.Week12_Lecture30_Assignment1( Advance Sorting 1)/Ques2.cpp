#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int> &arr1,vector<int> &arr2,vector<int> &ans){
    int i=0,j=0,k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
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


int countReverse(vector<int> &a, vector<int> &b){
    int i=0,j=0;
    int count=0;
    while(i<a.size() &&  j<b.size()){
        if(a[i]>2*b[j]){
            count += (a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
return count;
}

int reversePair(vector<int> &arr){
    int n = arr.size();
    if(n==1) return 0;
    int count=0;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i] = arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[n1+i];
    }
    count += reversePair(a);
    count += reversePair(b);
    count += countReverse(a,b);
    Merge(a,b,arr);
    a.clear();
    b.clear();
    return count;
}

int main(){ 
    vector<int> arr{1,8,7,3,2,11,10};
    cout<<"No. of reverse pairs:: "<<reversePair(arr)<<endl;

return 0;
}