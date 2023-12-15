#include<iostream>
using namespace std;

int main(){

    int n,i,j,k=0;
    cout<<"enter array size: ";
    cin>>n;
    int a[1000];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j and a[i]==a[j]){
                break;
            }
        }   
            if(j==n){
               cout<<a[i];
               break; 
            }
    }
    return 0;
}