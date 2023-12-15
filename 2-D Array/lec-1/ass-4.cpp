#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row: ";
    cin>>n;
    
    cout<<"enter column: ";
    cin>>m;
    int a[n][m],max;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    max=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max) max=a[i][j];
        }
    }
    cout<<max;
    return 0;
}