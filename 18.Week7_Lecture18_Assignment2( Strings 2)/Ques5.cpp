#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){ 
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> ans;
    while(ss>>temp){
        ans.push_back(temp);
    }
    string max = ans[0];
    for(int i=1;i<ans.size();i++){
        if(ans[i]>max){
            max = ans[i];
        }
    }
    cout<<"The word that is lexicographically maximum:: "<<max;
    
return 0;
}