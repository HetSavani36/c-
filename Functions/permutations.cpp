#include<iostream>
using namespace std;

void permutation(int x,int y){
    int nfact=1,rfact=1,i=1;
    for(i=1;i<=x;i++){
        nfact*=i;
    }
    for(i=1;i<=y;i++){
        rfact*=i;
    }
    cout<<nfact/rfact;
}

int main(){
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    
    cout<<"enter r: ";
    cin>>r;
    permutation(n,r);
    return 0;
}