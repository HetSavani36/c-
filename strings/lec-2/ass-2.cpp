#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;

    sort(s.begin(),s.end());
    cout<<s[s.size()-2];
}