#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool balance(string s){
    stack<char> st;
    int i=0;
    if(s.size()%2==1) return false;         
    while(s[i]!='\0'){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
        i++;
    }
    if(st.size()==0) return true;
}

int main(){
    string s="(()))";
    stack<char> st;
    cout<<balance(s);
    return 0;   
}