#include<iostream>
#include<vector>
using namespace std;

void cyclicSort(vector<int>& a,int n){
    int i=0;
    while(i<n){
        int idx=a[i]-1;
        if(i==idx) i++;
        else swap(a[i],a[idx]);
    }
}

int main(){
    int a[]={5,1,2,4,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    cyclicSort(v,n);
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}