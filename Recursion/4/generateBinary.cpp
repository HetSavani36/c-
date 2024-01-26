#include<iostream>
#include<string>
using namespace std;

void binary(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    binary(s+'1',n);
    binary(s+'0',n);
}

int main(){
    int n=3;
    binary("",n);
}