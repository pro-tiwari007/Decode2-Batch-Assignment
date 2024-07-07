#include<iostream>
using namespace std;
int main(){ 
    string str;
    cout<<"Enter strings: ";
    cin>>str;
    int i=str.size()/2, j=str.size()-1;
    while(i<j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<str<<endl;
    
return 0;
}