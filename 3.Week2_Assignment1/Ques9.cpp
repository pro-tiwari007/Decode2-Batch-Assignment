#include<iostream>
using namespace std;
int main(){ 
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        cout<<ch<<" is alphabet.";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<ch<<" is digit.";
    }
    else{
        cout<<ch<<" is special character.";
    }
return 0;
}