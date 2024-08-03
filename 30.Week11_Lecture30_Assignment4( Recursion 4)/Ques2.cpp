#include<iostream>
#include<vector>
using namespace std;

void generatePowerSet(vector<int> &arr,vector<int> ans,int idx,vector<vector<int>> &finalAns){
    if(idx == arr.size()){
        finalAns.push_back(ans);
        return;
    }
    if(ans.size()==0){
        generatePowerSet(arr,ans,idx+1,finalAns);
        ans.push_back(arr[idx]);
    }
    else if(ans[ans.size()-1]==arr[idx]){
        ans.push_back(arr[idx]);
    }
    else{
        generatePowerSet(arr,ans,idx+1,finalAns);
        ans.push_back(arr[idx]);
    }
    generatePowerSet(arr,ans,idx+1,finalAns);
}

int main(){
    vector<int> array{1,2,2,3};
    vector<vector<int>> solution;
    generatePowerSet(array,{},0,solution); 
    for(int i=0;i<solution.size();i++){
        cout<<" {";
        for(int j=0;j<solution[i].size();j++){
            cout<<solution[i][j];
            if(j<solution[i].size()-1){
                cout<<",";
            }
        }
        cout<<"} ";
        if(i<solution.size()-1){
                cout<<",";
        }
    }
return 0;
}