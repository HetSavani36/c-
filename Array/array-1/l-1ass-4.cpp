#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0,x;
    cout<<"enter number: ";
    cin>>x;

    for(int i=0;i<n;i++){
        if(a[i]==x) count++;
    }
    if(count==1){
        cout<<"no duplicate";
    }
    else if(count==0){
        cout<<"number not found";
    }
    else{
        cout<<"duplicate";
    }
    return 0;
}