#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    vector<int> ans{1};
    int j = 2;
    while(j<=num){
        int carry = 0;
        for(int i=0;i<ans.size();i++){
            int temp = ans[i]*j+carry;
            ans[i] = temp%10;
            carry = temp/10;
        }
        while(carry!=0){
            ans.push_back(carry%10);
            carry/=10;
        }
        j++;
    }
    reverse(ans.begin(),ans.end());
    cout<<"Factorial of "<<num<<" is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

return 0;
}