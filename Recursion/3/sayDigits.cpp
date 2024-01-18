#include<iostream>
#include<string>
#include<vector>
using namespace std;

string digit1(int digit){
    if(digit==0) return "zero";
    if(digit==1) return "one";
    if(digit==2) return "two";
    if(digit==3) return "three";
    if(digit==4) return "four";
    if(digit==5) return "five";
    if(digit==6) return "six";
    if(digit==7) return "seven";
    if(digit==8) return "eight";
    if(digit==9) return "nine";
}

void say(int num){
    if(num == 0) return;
    int digit = num % 10;
    string d=digit1(digit);
    say(num/10);
    cout<<d<<" ";
}

int main(){

    say(413);
    return 0;
}