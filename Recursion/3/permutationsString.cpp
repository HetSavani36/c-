#include<iostream>
#include<string>
using namespace std;

void permu(string ans,string org){

    if(org==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.length();i++){
        char ch=org[i];
        string left=org.substr(0,i);
        string right=org.substr(i+1);
        permu(ans+ch,left+right);
    }
}

int main(){

    string str="abcd";
    permu("",str);
    return 0;
}