#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2)){
        if((s1 == s2) && (s2 == s3)){
            cout<<"This is an Equilateral triangle.";
        }
        else if((s1 != s2) &&(s1 != s3) && (s2 != s3)){
            cout<<"This is a Scalene triangle.";
        }
        else{
            cout<<"This is an Isosceles triangle.";
        }
    }
    else{
        cout<<"Triangle is not possible.";
    }
return 0;
}