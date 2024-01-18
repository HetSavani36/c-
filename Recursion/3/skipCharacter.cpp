#include<iostream>
#include<string>

using namespace std;

void skip(string s,string n,char c,int idx){
    
    if(idx==s.size()) {
        cout<<n;
        return;
        }
    if(s[idx]!=c){
        n+=s[idx];
    }
    skip(s,n,c,idx+1);
}

int main(){

    skip("raghav garg","",'a',0);
    return 0;
}
