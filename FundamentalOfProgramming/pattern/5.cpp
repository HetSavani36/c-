/*
    *
   ***
   star pyramind
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,s,n;
    cout<<"enter no. of lines: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=i-1;j++){
            cout<<"*";
        }
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
