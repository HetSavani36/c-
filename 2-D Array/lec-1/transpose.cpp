#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter rows: ";
    cin>>n;
    
    cout<<"enter columns: ";
    cin>>m;
    int a[n][m],b[m][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     
     for(i=0;i<m;i++){
         for(j=i+1;j<n;j++){
             int temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
         }
         cout<<endl;
     }
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
    return 0;
}