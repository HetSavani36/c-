#include<iostream>
using namespace std;

int maxi(int a[],int n,int idx){
    if(idx==n) return 0;
    return max(a[idx],maxi(a,n,idx+1));
}
int main(){
    int a[]={1,9,6,4,21};
    int n=5;
    cout<<maxi(a,n,0);
}