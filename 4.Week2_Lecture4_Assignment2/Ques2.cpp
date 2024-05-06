#include<iostream>
using namespace std;
int main(){
    int a = 5, b, c ;
    b = a = 15 ;  //Associativity from right to left.
    c = a < 15 ;  //a < 15 is false, c = 0 
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}