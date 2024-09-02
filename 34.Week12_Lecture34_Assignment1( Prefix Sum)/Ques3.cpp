#include<iostream>
#include<vector>
using namespace std;

vector<int> prefixScore(vector<int> &arr){
    int n = arr.size();
    vector<int> conver(n);
    int max = arr[0];
    conver[0] = arr[0] + max;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        conver[i] = conver[i-1] + arr[i] + max;
    }
    return conver;
}


int main(){ 
    vector<int> arr{2,3,7,5,10};
    vector<int> ans = prefixScore(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } 
return 0;
}