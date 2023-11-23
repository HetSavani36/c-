#include<iostream>
using namespace std;

int hcf(int n1,int n2){
    int ans=1;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            ans=i;
            break;
        }
    }
    return ans;
}

int main(){

    int n1,n2;
    cout<<"enter a number 1: ";
    cin>>n1;
    cout<<"enter a number 2: ";
    cin>>n2;
    cout<<hcf(n1,n2);
    return 0;
}