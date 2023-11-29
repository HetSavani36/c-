#include<iostream>
using namespace std;

int main(){

    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n=sizeof(a)/4;
    int m=sizeof(b)/4;
    int c[m+n];
    int i=0,j=0,k=0;
    
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<m){
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<n){
            c[k]=a[i];
            i++;
            k++;
        }
    }
    for(i=0;i<m+n;i++){
        cout<<c[i];
    }
    
return 0;
}