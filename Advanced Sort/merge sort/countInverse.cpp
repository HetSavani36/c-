#include<iostream>
#include<vector>
using namespace std;
int c=0;

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

int count(vector<int>& a,vector<int>& b){
    int i=0,j=0,count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}

void inverse(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    inverse(a);
    inverse(b);

    c+=count(a,b);

    merge(a,b,v);
}

int main(){

    int a1[]={5,1,3,0,4,2,6};
    int n1=sizeof(a1)/sizeof(a1[0]);
    vector<int> a(a1,a1+n1);

    inverse(a);
    cout<<c;
    return 0;
}