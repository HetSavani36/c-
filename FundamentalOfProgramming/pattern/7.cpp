/*
      *
     ***
    *****
   *******
    *****
     ***
      *  
   star pyramind both lower and upper
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,s,n;
    cout<<"enter odd no. of lines: ";
    cin>>n;

    for(i=1;i<=n/2+1;i++){
        for(s=1;s<=n/2+1-i;s++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=i-1;j>=1;j--){
            cout<<"*";
        }
        for(s=1;s<=n/2+1-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=n/2;i>=1;i--){
        for(s=1;s<=n/2-i+1;s++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=i-1;j>=1;j--){
            cout<<"*";
        }
        for(s=1;s<=n/2-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
