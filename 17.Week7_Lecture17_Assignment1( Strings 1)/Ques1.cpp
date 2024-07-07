#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
    cout<<"Final string: "<<str<<endl; 
 return 0;
}