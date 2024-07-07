#include<iostream>
#include<algorithm>
using namespace std;
int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    for(int i=str.size()-1;i>=0;i--){
        str.push_back(str[i]);
    }
    cout<<str<<endl;
    
return 0;
}