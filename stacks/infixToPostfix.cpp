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
    s+=val2;
    s.push_back(ch);
    return s;
}
int main(){
    
    string s="7+9*4/8-3";
    stack<string> val;
    stack<char> op;

    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
        else{
            if(op.size()==0 || pr(s[i])>pr(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 && pr(s[i])<=pr(op.top())){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(ch,val1,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(ch,val1,val2);
        val.push(ans);
    }
    cout<<endl<<val.top();
    return 0;
}