#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s={"AJHXXYYZZKSK"};
    string v;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X') v.push_back(s[i]);
    }
    bool flag;
    for(int i=0;i<v.length()-1;i++){
        flag = true;
        for(int j=0;j<v.length()-i-1;j++){
            if(v[j]<v[j+1]) swap(v[j],v[j+1]);
            flag = false;
            if(flag == true) break;
        }
    }
    for(int i=0;i<v.length();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}