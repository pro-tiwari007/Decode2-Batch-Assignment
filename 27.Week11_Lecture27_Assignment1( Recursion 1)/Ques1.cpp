#include<iostream>
using namespace std;
void printSequence(int n,int x){
    if(x>=n){
        cout<<x<<" ";
        return;
    }
    if(x==0){
        return;
    }
    cout<<x<<" ";
    printSequence(n,x+1);
    cout<<x<<" ";

}
int main(){ 
    int num;
    cout<<"Enter number: ";
    cin>>num;
    printSequence(num,1);
return 0;
}