#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%400==0 && year%4==0){
        cout<<year<<" is a Leap year";  //1200,1600,2000,2400
    }
    else if(year%4 == 0){
        if(year%100 == 0){
           cout<<year<<" is not a Leap year"; //1300,1400,1500,1700,1800,1900
        }
        else{
            cout<<year<<"is a Leap year";
        }
    }
    else{
        cout<<year<<" is not a Leap year";
    }
return 0;
}