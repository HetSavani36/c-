//WAP to calculate max. no of notes particular number of given amount

#include<iostream>
using namespace std;
int main(){

    int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0,n;
    cout<<"enter amount: ";
    cin>>n;

    switch(n>=500){
        case 1:
        n500=n/500;
        n-=n500*500;
    }
    switch(n>=200){
        case 1:
        n200=n/200;
        n-=n200*200;
    }
    switch(n>=100){
        case 1:
        n100=n/100;
        n-=n100*100;
    }
    switch(n>=50){
        case 1:
        n50=n/50;
        n-=n50*50;
    }
    switch(n>=20){
        case 1:
        n20=n/20;
        n-=n20*20;
    }
    switch(n>=10){
        case 1:
        n10=n/10;
        n-=n10*10;
    }
    switch(n>=5){
        case 1:
        n5=n/5;
        n-=n5*5;
    }
    switch(n>=2){
        case 1:
        n2=n/2;
        n-=n2*2;
    }
    switch(n>=1){
        case 1:
        n1=n/1;
        n-=n1*1;
    }
    cout<<"notes of "<<500<<": "<<n500<<endl;
    cout<<"notes of "<<200<<": "<<n200<<endl;
    cout<<"notes of "<<100<<": "<<n100<<endl;
    cout<<"notes of "<<50<<" : "<<n50<<endl;
    cout<<"notes of "<<20<<" : "<<n20<<endl;
    cout<<"notes of "<<10<<" : "<<n10<<endl;
    cout<<"notes of "<<5<<"  : "<<n5<<endl;
    cout<<"notes of "<<2<<"  : "<<n2<<endl;
    cout<<"notes of "<<1<<"  : "<<n1<<endl;
    return 0;
}