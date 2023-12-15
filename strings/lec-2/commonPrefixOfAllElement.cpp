#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//check similarity between first and last only as after sorting all middle elements are same for common between first and last
int main(){

    vector<string> v ={"flower","flow","flight"};
    sort(v.begin(),v.end());    
    
    string f=v[0];
    string l=v[v.size()-1];
    int count =0,i=0;

    string final="";

    while(f[i]!='\0' && l[i]!='\0'){
        if(f[i]==l[i]) final+=f[i];
        i++;
    }

    cout<<final;
    
}