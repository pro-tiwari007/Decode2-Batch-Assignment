#include<iostream>
using namespace std;
int main(){
    int marksA,marksB,marksC;
    cout<<"Enter marks of A,B and C: ";
    cin>>marksA>>marksB>>marksC;
    if(marksA<marksB && marksA<marksC){
        cout<<"A marks is less.";
    }
    else if(marksB<marksA && marksB<marksC){
        cout<<"B marks is less.";
    }
    else{
        cout<<"C marks is less.";
    }
return 0;
}