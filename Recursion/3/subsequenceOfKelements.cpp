#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset(int a[],int n,int idx,vector<int> v,int k){

    if(idx==n){
        if(v.size()==k){
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
            cout<<endl;
        }
        return;
    }

    subset(a,n,idx+1,v,k);
    v.push_back(a[idx]);
    subset(a,n,idx+1,v,k);
    
}

int main(){

    int a[]={1,2,3,4,5};
    vector<int> v;
    int k=3;
    subset(a,5,0,v,k);

}