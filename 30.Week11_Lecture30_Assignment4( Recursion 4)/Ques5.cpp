#include<iostream>
#include<algorithm>
using namespace std;

void BinaryConversion(string ans,int n){
    if(n==0){
        reverse(ans.begin(),ans.end());
        cout<<ans;
        return;
    }
    ans += ((char)('0'+n%2));
    BinaryConversion(ans,n/2);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num; 
    cout<<"Binary conversion of "<<num<<" is: ";
    BinaryConversion({},num);

return 0;
}