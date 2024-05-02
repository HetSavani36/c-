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
    
    string s="79+4*8/3-";
    stack<int> val;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{
            char ch=s[i];
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(ch,val1,val2);
            val.push(ans);
        }
    }
    cout<<endl<<val.top();
    return 0;
}