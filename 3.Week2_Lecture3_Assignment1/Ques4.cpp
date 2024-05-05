#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length and breadth: ";
    cin>>length>>breadth;
    float perimeter = 2*(length+breadth);
    float area = length*breadth;
    if(area==perimeter){
        cout<<"Both perimeter and area are equal.";
    }
    else if(area>perimeter){
        cout<<"Area is greatest.";
    }
    else{
        cout<<"Perimeter is greatest.";
    }
return 0;
}