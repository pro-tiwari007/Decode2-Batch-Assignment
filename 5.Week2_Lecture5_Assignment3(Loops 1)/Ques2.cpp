#include<iostream>
using namespace std;
int main(){
    cout<<"Numbers divisible by 3 between 1 and 100: "<<endl;
    
    // for(int i=1;i<=100;i++){
    //     if(i%3==0){
    //         cout<<i<<" ";
    //     }
    // }
        
    for(int i=3;i<=100;i=i+3){
        cout<<i<<" ";
    }

return 0;
}