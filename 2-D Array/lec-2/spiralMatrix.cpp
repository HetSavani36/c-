#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter row/column: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int minr=0,minc=0,maxr=n-1,maxc=n-1;

    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        //down
        if(minr>maxr && minc>maxc) break;
         for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        //left
        if(minr>maxr && minc>maxc) break;
         for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        //up
        if(minr>maxr && minc>maxc) break;
         for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }
    return 0;
}