#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;

    string str;
    getline(cin,str);
    int l=str.length();
     reverse( str.begin() +l/2 , str.end() );
    cout<<str;
    return 0;
}