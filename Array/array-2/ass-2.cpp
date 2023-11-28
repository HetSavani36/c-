#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    int i,n,count=0,x,n1;
    cout<<"enter size: ";
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=n-1;i>n-4;i--){
        cout<<v[i];
    }
    return 0;
}