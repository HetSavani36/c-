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
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
        }

        if(i>n){
        for(s=1;s<=i-1;s++){
            cout<<" ";
        }
        for(j=2*n-1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
        
        }
    }

    return 0;
}
