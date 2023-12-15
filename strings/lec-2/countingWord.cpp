#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    string s = "he is the one and only one";
    stringstream ss(s);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    sort(v.begin(),v.end());

    int maxcount=1,count=1;
    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    
    for(int i=1;i<v.size();i++){
        if(v[i-1]==v[i]){
            count++;
            if(count==maxcount){
                cout<<maxcount<<" "<<v[i]<<endl;
            }
        }
        else count=1;
    }

    return 0;
}