#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter rows: ";
    cin>>n;
    
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++){
        if(i%2==1){
            for(j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
     
     
    
    return 0;
}