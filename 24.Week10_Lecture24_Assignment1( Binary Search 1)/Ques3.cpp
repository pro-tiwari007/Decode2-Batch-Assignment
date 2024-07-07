#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr{{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int count = 0,rowIndex=0;
    for(int i=0;i<arr.size();i++){
        int start =0,end = arr[i].size();
        int ans = 0;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[i][mid]==1){
                if(arr[i][mid-1]==1){
                    end=mid-1;
                }
                else{
                    ans = mid;
                    break;
                }
            }
            else{
                start = mid+1;
            }
        }
        if(arr.size()-ans-1>count){
            count = arr[i].size()-ans-1; 
            rowIndex=i;
        }
    }
    cout<<"Row contain maximum 1's: "<<rowIndex+1<<"-row"<<endl;

 return 0;
}