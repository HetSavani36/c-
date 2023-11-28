#include<iostream>
#include<vector>
using namespace std;

void reverse(int x,int y,vector<int> &a){
    int i,j;
    for(i=x,j=y;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    for(i=0;i<a.size();i++){
            cout<<a[i];
    }
}
int main(){

    int i,n;
    vector<int> a;
    cout<<"enter size: ";
    cin>>n;
    int k;
    cout<<"enter k: ";
    cin>>k;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    if(k>n) k=k%n;
    reverse(0,n-k-1,a);
    cout<<endl;
    reverse(n-k,n-1,a);
    cout<<endl;
    cout<<endl;
    reverse(0,n-1,a);
}