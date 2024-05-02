#include<iostream>
#include<string>
#include<vector>
using namespace std;

void sub(string org,string ans,int idx){
    if(idx==org.length()){
        cout<<ans<<endl;
        return;  
    } 
    char ch=org[idx];
    sub(org,ans+ch,idx+1);
    sub(org,ans,idx+1);
}

//using vector
void subV(string org,string ans,int idx,vector<string>& v){
    if(idx==org.length()){
        v.push_back(ans);
        return;  
    } 
    char ch=org[idx];
    subV(org,ans+ch,idx+1,v);
    subV(org,ans,idx+1,v);
}

int main(){
    int a[]={1,2,7,4,5};
    int n=5;
    vector<string> v;
    //sub("abc","",0,v);
    subV("abc","",0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}