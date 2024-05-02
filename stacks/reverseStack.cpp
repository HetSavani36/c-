#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>& st,int x){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}

void reverse(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    return 0;
}