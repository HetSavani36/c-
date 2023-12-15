#include<iostream>
using namespace std;

int main(){

    int x,n,i,j,k;
    cout<<"enter array size: ";
    cin>>n;
    int a[1000];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter x: ";
    cin>>x;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
    return 0;
}