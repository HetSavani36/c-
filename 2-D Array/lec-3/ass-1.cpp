#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"enter rows: ";
    cin>>n;
    
    cout<<"enter columns: ";
    cin>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                x=i;
                y=j; 
            }
        }
    }

    for(int i=0;i<n;i++){
        a[i][y]=0;
    }
    for(int j=0;j<m;j++){
        a[x][j]=0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}