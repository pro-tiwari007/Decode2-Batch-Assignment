#include<iostream>
using namespace std;

void printOddNumbers(int n1,int n2){
    int start = min(n1,n2);
    int end = max(n1,n2);    
    for(int i=start;i<=end;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    printOddNumbers(a,b);
return 0;
}