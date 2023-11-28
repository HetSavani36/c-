#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int i,n,count=0,x,n1;
    cout<<"enter size: ";
    cin>>n;
    
    cout<<"enter number: ";
    cin>>n1;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n;i++){
        if(v[i]>n1) count++;
    }
    cout<<count;
    return 0;
}