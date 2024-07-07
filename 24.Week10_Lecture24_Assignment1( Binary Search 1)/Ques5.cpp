#include<iostream>
using namespace std;
int main(){ 
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int start = 0;
    int end = num;
    bool flag = false;
    while(start<=end){
        int mid = start +(end - start)/2;
        if(mid*mid==num){
            flag = true;
            cout<<"Given number is a perfect square";
            break;
        }
        else if(mid*mid>num){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(!flag) cout<<"Given number is not a perfect square"<<endl;

return 0;
}