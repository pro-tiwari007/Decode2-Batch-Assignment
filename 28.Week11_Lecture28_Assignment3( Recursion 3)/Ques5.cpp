#include<iostream>
#include<vector>
using namespace std;
void subsetsWithDuplicates(vector<int> &arr,int idx, vector<int> ans,vector<vector<int>> &finalAns){
    if(idx==arr.size()){
        finalAns.push_back(ans);
        return;
    }
    if(ans.size()==0){
        subsetsWithDuplicates(arr,idx+1,ans,finalAns);
        ans.push_back(arr[idx]);
        subsetsWithDuplicates(arr,idx+1,ans,finalAns);
        return;
    }
    if(ans[ans.size()-1]==arr[idx]){
        ans.push_back(arr[idx]);
        subsetsWithDuplicates(arr,idx+1,ans,finalAns);
        return;
    }
    subsetsWithDuplicates(arr,idx+1,ans,finalAns);
    ans.push_back(arr[idx]);
    subsetsWithDuplicates(arr,idx+1,ans,finalAns);
}
int main(){
    int n; 
    cout<<"Enter size of array:: ";
    cin>>n;
    vector<int> array(n);
    cout<<"Enter elements of array:: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    vector<vector<int>> ans;
    subsetsWithDuplicates(array,0,{},ans);
    cout<<"Subset of array:: "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<" {";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
            if(j<ans[i].size()-1){
                cout<<",";
            }
        }
        cout<<"}";
        if(i<ans.size()-1){
            cout<<",";
        }
    }
    
return 0;
}