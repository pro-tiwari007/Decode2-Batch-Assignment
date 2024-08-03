#include<iostream>
using namespace std;

void OddNos(int a,int b){
    if(a>b){
        return;
    }        
    if(a%2==0 && b%2!=0){
        a++;        
    }
    else if(a%2==0 && b%2==0){
        a++;
        b--;
    }
    cout<<a<<" ";
    OddNos(a+2,b);
}

int sumOddNos(int a,int b){
    if(a>b){
        return 0;
    }        
    if(a%2==0 && b%2!=0){
        a++;        
    }
    else if(a%2==0 && b%2==0){
        a++;
        b--;
    }
    return a + sumOddNos(a+2,b);
}
int main(){ 
    int start,end;
    cout<<"Enter starting and ending number: ";
    cin>>start>>end;
    OddNos(start,end);
    cout<<"\nSum of the odd numbers:: "<<sumOddNos(start,end);
return 0;
}