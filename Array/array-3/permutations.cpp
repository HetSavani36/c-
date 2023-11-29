#include<iostream>
using namespace std;

int fact(int n)
{
    int i,pro=1;
    for(i=1;i<=n;i++){
        pro*=i;
    }
    cout<<"no of sets are: ";
    cout<<pro;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    fact(n);
    return 0;
}