#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row/column: ";
    cin>>n;
    
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    int i=0;
    int j=n-1;
    for(int k=0;k<n;k++){
    while(i<=j){
            int temp=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=temp;
            i++;
            j--;
        }
    }

    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    
    for( i=0;i<n;i++){
        for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
    }
    
    
    return 0;
}