#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    int l=str.length();
    int a[l];

    for(int i=0;i<l;i++){
        a[i]=str[i];
    }
    
    for(int i=0;i<l;i++){
        cout<<(char)a[i];
    }
    return 0;
}