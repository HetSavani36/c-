#include<iostream>
#include<vector>
using namespace std;

int main(){

    int i,n;
    vector<int> a;
    cout<<"enter size: ";
    cin>>n;

    for(i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int j; 
    for(i=0,j=n-1;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
        for(i=0;i<n;i++){
            cout<<a[i];
        }

}