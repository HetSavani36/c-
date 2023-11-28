#include<iostream>
#include<vector>
using namespace std;

int main(){

    int i,n;
    vector<int> v;
    cout<<"enter size: ";
    cin>>n;

    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a[n]; 
    for(i=0;i<n;i++){
        int j=n-1-i;
        a[i]=v[j];
    }
        for(i=0;i<n;i++){
            cout<<a[i];
        }

}