#include<iostream>
using namespace std;

int main(){

    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n=(sizeof(a)+sizeof(b))/4;
    int c[n],i,j;
    
    for(int i=0;i<4;i++){
        c[i]=a[i];
    }
    
    for(int j=0;j<4;j++){
        int i=j+4;
        c[i]=b[j];
    }
   
    
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
        if(c[i]<c[j]){
            int temp=c[i];
            c[i]=c[j];
            c[j]=temp;
             }
        }
    }
     for(int i=0;i<8;i++){
        cout<<c[i]<<" ";
    }
return 0;
}