#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main(){
    stack<char> st;
    stack<char> temp;
    vector<int> v;
    system("cls");
    v.push_back(100);
    v.push_back(80);
    v.push_back(60);
    v.push_back(70);
    v.push_back(60);
    v.push_back(75);
    v.push_back(85);
    
    st.push(v[0]);
    for(int i=1;i<v.size();i++){
        if(st.top()<v[i]){
            
        }
    }
}