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
        if(v[i]%2==0){
            esum+=v[i];
        }
        
        if(v[i]%2==1){
            osum+=v[i];
        }
    }
    cout<<esum-osum;
    return 0;
}