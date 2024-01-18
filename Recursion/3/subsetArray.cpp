#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset(int a[],int n,int idx,vector<int> v){

    if(idx>=n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }

    subset(a,n,idx+1,v);
    v.push_back(a[idx]);
    subset(a,n,idx+1,v);
    
}

int main(){

    int a[]={1,2,3};
    vector<int> v;
    subset(a,3,0,v);

}