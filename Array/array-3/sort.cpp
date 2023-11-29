#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter size: ";
    cin>>n;
    int i,j,a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
             }
        }
    }
    for(i=0;i<sizeof(a)/4;i++){
        cout<<a[i];
    }
    return 0;
}