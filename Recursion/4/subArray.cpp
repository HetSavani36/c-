#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subArray(vector<int> v,int a[],int n,int idx){

    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArray(v,a,n,idx+1);
    
    if(v.size()==0 || a[idx-1]==v[v.size()-1]){
        v.push_back(a[idx]);
        subArray(v,a,n,idx+1);
    }
}

int main(){

    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v;
    subArray(v,a,n,0);
    return 0;
}