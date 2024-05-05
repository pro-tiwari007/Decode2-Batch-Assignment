#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter Point 1 coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter Point 2 coordinates: ";
    cin>>x2>>y2;
    cout<<"Enter Point 3 coordinates: ";
    cin>>x3>>y3;
    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);
    float m3 = (y3-y1)/(x3-x1);

    if(m1 == m2 && m2 == m3){
        cout<<"All points fall on straight line.";
    }
    else{
        cout<<"All points not fall on straight line.";
    }
return 0;
}