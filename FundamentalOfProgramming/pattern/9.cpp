
#include<iostream>
using namespace std;
int main(){

    int i,j,k,m,n;
    cout<<"enter no. of lines: ";
    cin>>n;
    m=n-1;
    for(i=1;i<=2*n-1;i++){
        cout<<i;        
    }
    cout<<endl;
    for(i=m;i>=1;i--){
        for(j=1;j<=m;j++){
            cout<<j;
        }
        for(k=1;k<=2*m-1;k++){
            cout<<" ";
        }
        for(j=m+2;j<=2*n-1;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}
