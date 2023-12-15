#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;

    string str;
    getline(cin,str);
    string str1;
    
    str1 = reverse( str.begin() , str.end() );
    if(str==str1) cout<<"palindrome";
    else cout<<"non palindrome";
  
    return 0;
}