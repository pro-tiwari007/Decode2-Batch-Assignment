#include<iostream>
using namespace std;
int main(){
    int marksA,marksB,marksC;
    cout<<"Enter marks of A,B and C: ";
    cin>>marksA>>marksB>>marksC;
    if(marksA<marksB && marksA<marksC){
        cout<<"'A' has least marks.";
    }
    else if(marksB<marksA && marksB<marksC){
        cout<<"'B' has least marks.";
    }
    else{
        cout<<"'C' has least marks.";
    }
return 0;
}