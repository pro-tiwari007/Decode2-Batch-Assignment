#include<iostream>
using namespace std;
int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    char max=str[0],secMax='#';
    for(int i=1;i<str.size();i++){
        if(str[i]>max){
            secMax = max;
            max = str[i];
        }
        else if(str[i]>secMax && str[i]!=max){
            secMax = str[i];
        }
    }
    cout<<secMax;
return 0;
}