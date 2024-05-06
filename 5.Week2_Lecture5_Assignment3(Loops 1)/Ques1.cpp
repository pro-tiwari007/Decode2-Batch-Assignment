#include<iostream>
using namespace std;
int main(){
    cout<<"Odd numbers between 1 and 100: "<<endl;    
    // for(int i=1;i<=100;i++){
    //     if(i%2!=0){
    //         cout<<i<<" ";
    //     }
    // }        
    for(int i=1;i<=100;i=i+2){
        cout<<i<<" ";
    }
return 0;
}