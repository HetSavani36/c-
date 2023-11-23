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
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]) min=a[i];
    }
     cout<<min;
    return 0;
}