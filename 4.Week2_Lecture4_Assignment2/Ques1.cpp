#include<iostream>
using namespace std;
int main(){ 
    int amount;
    int note2000=0, note500=0, note200=0, note100=0, note50=0, note20=0, note10=0;
    cout<<"Enter the amount: ";
    cin>>amount;
    if(amount>=2000){
        note2000 = amount/2000;
        amount%=2000;
        if(note2000!=0){
            cout<<"Notes of '2000' is: "<<note2000<<endl;
        }
    }
    if(amount>=500){
        note500 = amount/500;
        amount%=500;
        if(note500!=0){
            cout<<"Notes of '500' is: "<<note500<<endl;
        }
    }
    if(amount>=200){
        note200 = amount/200;
        amount%=200;
        if(note200!=0){
            cout<<"Notes of '200' is: "<<note200<<endl;
        }
    }
    if(amount>=100){
        note100 = amount/100;
        amount%=100;
        if(note100!=0){
            cout<<"Notes of '100' is: "<<note100<<endl;
        }
    }
    if(amount>=50){
        note50 = amount/50;
        amount%=50;
        if(note50!=0){
            cout<<"Notes of '50' is: "<<note50<<endl;
        }
    }
    if(amount>=20){
        note20 = amount/20;
        amount%=20;
        if(note20!=0){
            cout<<"Notes of '20' is: "<<note20<<endl;
        }
    }
    if(amount>=10){
        note10 = amount/10;
        amount%=10;
        if(note10!=0){
            cout<<"Notes of '10' is: "<<note10<<endl;
        }
    }
return 0;
}