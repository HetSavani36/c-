#include<iostream>
#include<vector>
using namespace std;

void missing(vector<int>& a,int n){
    int i=0;
    while(i<n){
        int idx=a[i]-1;
        if(i==idx) i++;
        else swap(a[i],a[idx]);
    }
}

int main(){
    int a[]={1,4,2,0,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    missing(v,n);
    int sum=0,osum=0;
    for(int i=0;i<n;i++){
        if(v[i]!=i) cout<<i; 
    }
}