/*
    plus 
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter odd number of row's and column's : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}