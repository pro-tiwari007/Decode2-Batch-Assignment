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
        cout<<"Circumference = Area";
    }
    else if(area>circumference){
        cout<<"Area > Circumference";
    }
    else{
        cout<<"Circumference > Area";
    }
return 0;
}