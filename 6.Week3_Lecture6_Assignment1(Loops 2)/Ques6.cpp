#include<iostream>
using namespace std;
int main(){ 
    int num,reverse;
    cout<<"Enter the number: ";
    cin>>num;
    int temp = num;
    int digit = temp%10;
    reverse = digit;
    while(temp/=10){
        int digit = temp%10;
        reverse = reverse*10+digit;
    }
    cout<<"Sum of given number and its reverse: "<<num+reverse<<" ["<<num<<"+"<<reverse<<"]";
return 0;
}