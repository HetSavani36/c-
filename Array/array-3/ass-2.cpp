#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    cout<<"enter number: ";
    cin>>n;
    int pro=1,a[1000];
    for(i=1;i<=n;i++){
        a[i-1]=i;
    }
    if(n%2==0){
    for(i=0,j=n-1;i<=j;i++,j--){
        pro=pro*(a[i]*a[j]);
    }
    }
    if(n%2==1){
        for(i=0,j=n-1;i<j;i++,j--){
        pro=pro*(a[i]*a[j]);
    }
    pro*=n/2+1;
    }
    cout<<pro;

    return 0;
}