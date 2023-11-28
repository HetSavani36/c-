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
    int b[n];
    for(i=0;i<n;i++){
        int j=n-i-1;
        b[j]=v[i];
    }
    for(i=0;i<n;i++){
        cout<<b[i];
        if(v[i]==b[i]){
            count++;
        }
     }
     if(count==n) cout<<endl<<"palindrome";
     else cout<<endl<<"non-palindrome";
    return 0;
}