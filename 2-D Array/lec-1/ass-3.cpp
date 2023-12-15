#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row: ";
    cin>>n;
    cout<<"enter column: ";
    cin>>m;
    int r1,c1,r2,c2;

    int a[n][m];
    cout<<"matrix 1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter co-ordinates 1: ";
    cin>>r1>>c1;
    
    cout<<"enter co-ordinates 2: ";
    cin>>r2>>c2;
    
    cout<<endl<<a[r1][c1]+a[r2][c2];
    return 0;
}