#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int i,n,count=0,x;
    cout<<"enter size: ";
    cin>>n;
    
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int esum=0,osum=0;
    for(i=0;i<n;i++){
        if((i+1)%2==0){
            v[i]=v[i]*2;
        }
        
        if((i+1)%2==1){
            v[i]=v[i]+10;
        }
    }
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}