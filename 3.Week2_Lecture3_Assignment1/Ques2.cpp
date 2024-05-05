#include<iostream>
using namespace std;
int main(){
    int radius;
    float pi = 3.14159265359;
    cout<<"Enter radius: ";
    cin>>radius;
    float circumference = 2*pi*radius;
    float area = pi*radius*radius;
    if(area==circumference){
        cout<<"Both circumference and area are equal.";
    }
    else if(area>circumference){
        cout<<"Area is largest.";
    }
    else{
        cout<<"Circumference is largest.";
    }
return 0;
}