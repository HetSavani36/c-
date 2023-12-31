#include<iostream>
using namespace std;

int main(){

    int a[]={1,2,4,3,5};
    int n=5;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    bool ans;
    for(int i=0;i<n-1;i++){
        ans=true; 
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                ans=false;
            }
            if(ans==true) break;
        }
    }
    if(ans==true) cout<<"not sorted";
    else cout<<"sorted";
    return 0;
}