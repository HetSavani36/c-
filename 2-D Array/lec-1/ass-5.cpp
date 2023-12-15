#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row: ";
    cin>>n;
    
    cout<<"enter column: ";
    cin>>m;
    int a[n][m],sum=0,max1=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
        max1=max(max1,sum);
    }
    cout<< max1;
    return 0;
}