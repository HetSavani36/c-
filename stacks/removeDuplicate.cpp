#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;


string remove(string s){
    stack<char> st;
    int i=0;
    while(s[i]!='\0'){
        if(st.size()==0 || st.top()!=s[i]) st.push(s[i]);
        i++;
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    string s="aaabbcddaabffg";
    cout<<remove(s);

    return 0;   
}