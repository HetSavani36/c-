#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset(string a,string ans,int idx,vector<string>& v){

    if(a.size()==idx){
        v.push_back(ans);
        return;
    }

    subset(a,ans+a[idx],idx+1,v);
    subset(a,ans,idx+1,v);
    
}

int main(){

    string a="abc";
    string ans="";
    vector<string> v;
    subset(a,ans,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}