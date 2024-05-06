#include<iostream>
using namespace std;

int NoOfDigitSquare(int num){
    int result=0;
    while(num != 0){
        result++;
        num/=10;
    }
    return result*result;
}

int main(){ 
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Square of no. of digits: "<<NoOfDigitSquare(n);
return 0;
}