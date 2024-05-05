#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x-coordinate and y-coordinate: ";
    cin>>x>>y;
    if(y==0){
        cout<<"Point lies on x-axis.";
    }
    else if(x==0){
        cout<<"Point lies on y-axis.";
    }
    else if( x==0 && y==0){
        cout<<"Point lies on origin.";
    }
    else{
        cout<<"Point lies on any quadrant.";
    }
return 0;
}