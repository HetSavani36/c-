#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;

int main(){
    stack<int> st;
    stack<int> temp;
    system("cls");
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    cout<<st.top();
    cout<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl<<temp.size()<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    } 
}