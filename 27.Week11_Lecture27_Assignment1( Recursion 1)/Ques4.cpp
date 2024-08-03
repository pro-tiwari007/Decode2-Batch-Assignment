#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    if(n==1) return true;
    if(n==0||n%2!=0) return false;
    return powerOfTwo(n/2);
}

int main(){ 
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(powerOfTwo(n)){
        cout<<"Given number is power of two."<<endl;
    }
    else{
        cout<<"Given number is not power of two."<<endl;
    }

return 0;
}