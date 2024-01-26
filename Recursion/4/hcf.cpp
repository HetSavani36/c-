#include<iostream>
using namespace std;

int hcf(int quo,int div){
    if(quo==0) return div;
    else return hcf(div%quo,quo);
}

int main(){

    int n1=60;
    int n2=24;
    cout<<hcf(min(n1,n2),max(n1,n2));
    return 0;
}