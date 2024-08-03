#include<iostream>
using namespace std;

int NoOfWays(int n){
    if(n<1){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 4;
    }
    else{
        return NoOfWays(n-1)+NoOfWays(n-2)+NoOfWays(n-3);
    }
}

int main(){ 
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;
    cout<<NoOfWays(n);

return 0;
}