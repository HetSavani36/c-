#include<iostream>
using namespace std;

int pow(int n){
    if(n==1) return 1;
    if(n==0 || n%2!=0) return 0;
    return pow(n/2);
}

int main(){
    cout<<pow(30);
    return 0;
}