#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return true;
    }
    else{
        return false;
    }
}

int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if((str[i]>='A'&& str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
            if(isVowel(str[i])){
                count++;
            }
        }
    }
    cout<<"Number of consonants: "<<str.size()- count<<endl;

return 0;
}