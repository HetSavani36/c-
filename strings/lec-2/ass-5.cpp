#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    stringstream ss(s);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<"lexicographic word is"<<" "<<v[v.size()-1];
    
}