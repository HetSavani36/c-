#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
            count++;
        }
    }
    for(int i=0;i<s.size();i++){
        if((s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u') && (s[i+1]=='a' ||s[i+1]=='e' ||s[i+1]=='i' ||s[i+1]=='o' ||s[i+1]=='u')){
            count++;
        }
    }
    cout<<count;
}