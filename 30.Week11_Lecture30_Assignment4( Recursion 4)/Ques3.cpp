#include<iostream>
using namespace std;

int longestCommonSubstring(string &a, string &b, int i, int j, int count){
    if(i == a.size() || j == b.size()){
        return count;
    }
    else if(a[i] == b[j]){
        return longestCommonSubstring(a,b,i+1,j+1,count+1);
    }
    else{
        int count1 = longestCommonSubstring(a,b,i,j+1,0); // if a[i] is part of longest substring
        int count2 = longestCommonSubstring(a,b,i+1,j,0); // if b[j] is part of longest substring
        return max(count,max(count1,count2));
    }
}


int main(){
    string X = "pmabcdkfy";
    string Y = "hvhtmabcdfy";

    cout<<"Length of longst common substring is: "<<longestCommonSubstring(X,Y,0,0,0);


return 0;
}