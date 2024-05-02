#include<iostream>
#include<string>
#include<stack>
using namespace std;

int pr(char ch){
    if(ch=='+' || ch=='-') return 0;
    else return 1;
}

int solve(char ch,int val1,int val2){
    if(ch=='+') return val2+val1;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val2*val1;
    else return val1/val2; 
}

int main(){
    
    string s="(7+9)*4/8-3";
    stack<int> val;
    stack<char> op;

    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(ch,val1,val2);
                    val.push(ans);
                }
                op.pop();
            }
            else if(pr(s[i])>pr(op.top())) op.push(s[i]);
            else{
                while(op.size()>0 && pr(s[i])<=pr(op.top())){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(ch,val1,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(ch,val1,val2);
        val.push(ans);
    }
    cout<<endl<<val.top();
    return 0;
}