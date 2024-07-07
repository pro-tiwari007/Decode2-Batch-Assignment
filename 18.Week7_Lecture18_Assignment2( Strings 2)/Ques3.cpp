#include<iostream>
#include<vector>

using namespace std;

bool isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return true;
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        return true;
    }
    return false;
}

int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    int count=0,ans=0;
    for(int i=0;i<str.size();i++){
        if(!isVowel(str[i])){
            ans += count*(count+1)/2;
            count = 0;
        }
        else{
            count++;
        }
    }
    ans += count*(count+1)/2; 
    cout<<ans<<endl;  
return 0;
}