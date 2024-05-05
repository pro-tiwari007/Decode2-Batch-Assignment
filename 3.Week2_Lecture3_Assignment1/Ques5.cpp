#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"Enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2)){
        if((s1 == s2) && (s2 == s3)){
            cout<<"Equilateral triangle.";
        }
        else if((s1 != s2) &&(s1 != s3) && (s2 != s3)){
            cout<<"Scalene triangle.";
        }
        else{
            cout<<"Isosceles triangle.";
        }
    }
    else{
        cout<<"Triangle is not possible.";
    }
return 0;
}