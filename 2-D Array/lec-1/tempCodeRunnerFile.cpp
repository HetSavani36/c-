#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter row/column: ";
    cin>>n;
    int a[n][n],b[n][n];
    cout<<"matrix 1";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix 2";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]+=a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j];
        }
    }
    return 0;
}