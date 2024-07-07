#include<iostream>
#include<cstring>

using namespace std;
int main(){
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    bool flag = true;
    for(int i=0;i<str.size()/2;i++){
        if(str[i]==str[str.size()-i-1]){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Given string is palindrome."<<endl;
    }
    else{
        cout<<"Given string is not a palindrome."<<endl;
    } 

return 0;
}