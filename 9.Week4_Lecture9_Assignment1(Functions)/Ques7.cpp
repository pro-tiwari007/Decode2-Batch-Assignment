#include<iostream>
using namespace std;
void printHello(){
    cout<<"Hello "<<endl;
}

void printHello(int a){ // Function can be overriden by changing number or types of parameters.
    cout<<"Namaste "<<endl;
}
int main(){
    printHello();
    printHello(1); 
return 0;
}