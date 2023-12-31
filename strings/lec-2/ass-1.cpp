#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s,org;
    cout<<"enter a string: ";
    cin>>s;
    org=s;
    reverse(s.begin(),s.end());
    cout<<org+s;
}