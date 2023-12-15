#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;

    string str;
    getline(cin,str);
    
    int i=0;
    int l=str.length();
    for(i=0;i<l;i++){
        if(i%2==1) str[i]='#';
    }
    
    cout<<str;

    return 0;
}