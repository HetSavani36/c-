#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int i,n,n1;
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
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==n1){
                cout<<i<<" "<<j<<endl;;
            }
        }
    }
    return 0;
}