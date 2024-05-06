#include<iostream>
using namespace std;
int main(){ 
    int a = 15, b = 20;
    int *ptr = &a;   //ptr pointing to variable 'a'.
    int *ptr2 = &b;  //ptr2 pointing to variable 'b'.
    *ptr = *ptr2;    // now a = 20.('a' gets the value of 'b')
    cout<<a<<" "<<*ptr<<" "<<*ptr2;
return 0;
}