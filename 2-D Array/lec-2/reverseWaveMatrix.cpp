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
    
    for(int i=n-1;i>=0;i--){
            if(i%2==1){
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }   
            }
    }
    return 0;
}