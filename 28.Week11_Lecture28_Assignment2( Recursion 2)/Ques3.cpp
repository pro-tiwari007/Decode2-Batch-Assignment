#include<iostream>
using namespace std;

int stepsToOne(int num){
    if(num==0){
        return 0;
    }
    if(num%2==0){
        num = num/2;
    }
    else{
        num = num-1;
    }
    return 1+stepsToOne(num);
}

int main(){ 
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Steps to reduce to 1:: "<<stepsToOne(n);
 return 0;
}