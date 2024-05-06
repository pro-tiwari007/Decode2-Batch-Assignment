#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for printing table: ";
    cin>>n;
    // for(int i=1;i<=10;i++){
    //     cout<<n*i<<endl;
    // }
        
    for(int i=n;i<=10*n;i=i+n){
        cout<<i<<" "<<endl;
    }

return 0;
}