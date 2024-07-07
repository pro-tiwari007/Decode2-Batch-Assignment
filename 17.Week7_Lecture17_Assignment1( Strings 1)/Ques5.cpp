#include<iostream>
using namespace std;
int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    int ans=0;
    for(int i=0;i<str.size();i++){
        ans = ans*10 + (int)(str[i]-'0');
    }
    cout<<ans<<endl;
    
return 0;
}