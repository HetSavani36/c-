#include<iostream>
using namespace std;

int main(){

    int n,m,p,q;
    cout<<"enter matrix 1 row: ";
    cin>>n;
    cout<<"enter matrix 1 col: ";
    cin>>m;
    cout<<"enter matrix 2 row: ";
    cin>>p;
    cout<<"enter matrix 1 row: ";
    cin>>q;

    int a[n][m],b[p][q],c[n][q];
    
    cout<<"matrix-1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl<<"matrix-2"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    if(m==q){
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<m;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }    
    }

    else{
        cout<<"multiplication not possible";
    }

    
    return 0;
}