#include<iostream>
using namespace std;

double circleArea(int radius){
    return 3.14159265359*radius*radius;
}
int main(){ 
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"Area of circle: "<<circleArea(r)<<" sq. units";
return 0;
}