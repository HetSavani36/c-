#include<iostream>
#include<string>
#include<stack>
using namespace std;

int pr(char ch){
    if(ch=='+' || ch=='-') return 0;
    else return 1;
}
string solve(char ch,string val1,string val2){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}

int main(){
    
    string s="79+4*8/3-";
    stack<string> val;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            char ch=s[i];
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(ch,val1,val2);
            val.push(ans);
        }
    }
    cout<<endl<<val.top();
    return 0;
}