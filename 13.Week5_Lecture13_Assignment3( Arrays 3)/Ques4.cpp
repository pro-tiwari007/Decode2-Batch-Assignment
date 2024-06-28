#include<iostream>
using namespace std;
int main(){
    int superArray[] = {1,4,8,9,11,17,10,6,15};
    int m = sizeof(superArray)/sizeof(int);
    int subArray[] = {17,11,8,1};
    int n = sizeof(subArray)/sizeof(int);
    bool flag;
    for(int i=0;i<n;i++){
        flag = false;
        for(int j=0;j<m;j++){
            if(subArray[i] == superArray[j]){
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"Subset of Array."<<endl;
    }
    else{
        cout<<"Not a subset of Array."<<endl;
    }


return 0;
}