#include<iostream>
#include<climits>
using namespace std;
void findK(int arr[],int n){
    float kmin=0,kmax = INT_MAX;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            kmin = max(kmin,(float)(arr[i]+arr[i+1])/2);
        }
        else{
            kmax = min(kmax,(float)(arr[i]+arr[i+1])/2);
        }
        if(kmin>=kmax){
            flag = false;
            break;
        }
    }
    if(flag){
        if(kmax != INT_MAX){
            for(int i = (kmin-(int)kmin == 0)?(kmin):((int)kmin+1); i<= (int)kmax;i++){
                cout<<i<<" ";
            }
        }
        else{
            cout<<"many solutions";
        }
    }
    else {
        if(kmin == kmax){
            if(kmin - (int)kmin == 0){
                cout<<"Only value of k: "<<kmin<<endl;
            }
            else{
                cout<<"No element exist!";
            }
        }
        else{
            cout<<"No element exist!";
        }
    }

}

int main(){ 
    int arr[] = {5,3,1,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"k-values:: ";
    findK(arr,n);
 return 0;
}