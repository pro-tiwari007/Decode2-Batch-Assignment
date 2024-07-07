#include<iostream>
#include<algorithm>
using namespace std;
bool checkAnagram(string s, string t){
    if(s.size()!=t.size()){
        return false;
    }
    int element[255] = {0};
    for(int i=0;i<s.size();i++){
        element[(int)s[i]]++;
        element[(int)t[i]]--;
    }
    for(int i=0;i<255;i++){
        if(element[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s,t;
    cout<<"Enter two strings: ";
    cin>>s>>t;
    if(checkAnagram(s,t)){
        cout<<"They are Anagrams"<<endl;
    } 
    else{
        cout<<"They are not Anagrams"<<endl;
    }

return 0;
}