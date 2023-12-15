#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;

    string str;
    getline(cin,str);
    
    int count=0;
    int l=str.length();
    for(int i=0;i<l;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') count++;
    }
    
    cout<<l-count;

    return 0;
}