#include<iostream>
using namespace std;

void combination(int x,int y){
    int nfact=1,rfact=1,i=1,nrfact=1;
    for(i=1;i<=x;i++){
        nfact*=i;
    }
    for(i=1;i<=y;i++){
        rfact*=i;
    }
    
    for(i=1;i<=x-y;i++){
        nrfact*=i;
    }
    cout<<nfact/(rfact*nrfact);
}

int main(){
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    
    cout<<"enter r: ";
    cin>>r;
    combination(n,r);
    return 0;
}