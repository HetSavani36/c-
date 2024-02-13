#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    
    if(j==b.size()){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}


void sort(vector<int>& v){
    int n=v.size(),n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);

    if(n==1) return;
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    sort(a);
    sort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
}


int main(){

    int a1[]={5,4,3,2,1};
    int n1=sizeof(a1)/sizeof(a1[0]);
    vector<int> a(a1,a1+n1);

    sort(a);
    
    for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
    }
    return 0;
}

