/*
    1
    01
    1010
    01010
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,k=1;

    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}