#include<iostream>
using namespace std;
int main(){

    int i,j,s,k=1;
    for(i=1;i<=4;i++){
        cout<<i;
    }
    for(i=3;i>=1;i--){
        cout<<i;
    }
    cout<<"\n";

    for(i=3;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        a=3;
        for(s=8-a;s>=1-i;s--){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
    cout<<endl;
    }
    return 0;
}