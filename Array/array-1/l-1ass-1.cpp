#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=a[i];
     }
     cout<<pro;
    return 0;
}