/*
    1
   121
   number pyramind
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,s,n;
    cout<<"enter no. of lines: ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<j;
        }
        for(s=1;s<=n-i;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
