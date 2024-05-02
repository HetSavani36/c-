#include<iostream>
#include<string>
#include<stack>
using namespace std;

int pr(char ch){
    if(ch=='+' || ch=='-') return 0;
    else return 1;
}
int solve(char ch,int val1,int val2){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2; 
}

int main(){
    
    string s="-/*+79483";
    stack<int> val;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{
            char ch=s[i];
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=solve(ch,val1,val2);
            val.push(ans);
        }
    }
    cout<<endl<<val.top();
    return 0;
}