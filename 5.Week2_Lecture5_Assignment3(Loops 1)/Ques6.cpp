#include<iostream>
using namespace std;
int main(){ 
    char ch1 = 'A',ch2 = 'a';
    cout<<"Uppercase letters ASCII values:"<<endl;
    while(ch1<='Z'){
        cout<<ch1<<":"<<(int)ch1<<" ";
        ch1++;
    }
    cout<<"\nLowercase letters ASCII values:"<<endl;
    while(ch2<='z'){
        cout<<ch2<<":"<<(int)ch2<<" ";
        ch2++;
    }
return 0;
}