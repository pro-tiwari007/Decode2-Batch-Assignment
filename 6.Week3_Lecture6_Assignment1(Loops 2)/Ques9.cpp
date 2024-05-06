#include<iostream>
using namespace std;
int main(){ 
    for(int i=1;i<=500;i++){
        int temp = i,sum=0;
        while(temp != 0){
            int digit = temp%10;
            sum+=digit*digit*digit;
            temp/=10;
        }
        if(sum == i){
            cout<<i<<endl;
        }
    }
return 0;
}