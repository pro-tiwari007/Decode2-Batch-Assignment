#include<iostream>
#include<vector>
using namespace std;

class NumArray{
public:
    vector<int> arr;
    vector<int> prefixSum;
    NumArray(vector<int> &array){
        for(int i=0;i<array.size();i++){
            arr.push_back(array[i]);
        }
        prefixSum.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            prefixSum.push_back(prefixSum[i-1] + arr[i]);
        }
    }
    int sumRange(int left, int right){
        if(left == 0){
            return prefixSum[right];
        }
        return prefixSum[right] - prefixSum[left-1]; 
    }
    void display(){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){ 
    vector<int> arr{-2,0,3,-5,2,-1};
    NumArray newArr(arr);
    newArr.display();
    cout<<newArr.sumRange(0,2)<<endl;
    cout<<newArr.sumRange(2,5)<<endl;
    cout<<newArr.sumRange(0,5)<<endl;
return 0;
}