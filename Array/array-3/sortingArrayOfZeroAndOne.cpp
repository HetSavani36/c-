#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    int z=0,o=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) z++;
        else o++;
    }
    
    for(int i=0;i<a.size();i++){
        if(i<z) a[i]=0;
        else a[i]=1;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
}