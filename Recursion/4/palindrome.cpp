#include<iostream>
#include<algorithm>
using namespace std;

int ispalindrome(string s, int i,int j){
    if(i>j) return 1;
    if(s[i]!=s[j]) return 0;
    return ispalindrome(s, i+1 ,j-1);
}

int main(){

    string s="mom";
    cout<<ispalindrome(s,0,s.length()-1);
    return 0;
}