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
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]) max=a[i];
    }
     for(int i=1;i<n;i++){
        if(max==a[i]) a[i]=0;
    }
    max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]) max=a[i];
    }
    cout<<max;
    return 0;
}