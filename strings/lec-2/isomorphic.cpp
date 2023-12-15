#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<int> v(150,1000);
    string s,t;
    cout<<"enter s and t: ";
    cin>>s>>t;
   
    if(s.size()!=t.size()){
        cout<<"false";
    }
    
    else{
        for(int i=0;i<s.length();i++){
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i])) cout<<"false";
        }
    }
    cout<<"iomorphic";

}