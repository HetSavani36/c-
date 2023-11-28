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
    v[0]=0;
    for(i=0;i<n;i++){
        if(v[i+1]<v[i]){
            count++; 
        } 
    }
    if(count==0){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}