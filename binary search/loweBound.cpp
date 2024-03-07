#include<iostream>
using namespace std;

int main(){

    int a[]={1,2,3,3,3,4,4,5};
    int n=8;
    int tar;
    cout<<"target: ";
    cin>>tar;
    int ans=-1;

    int low=0,high=n-1,mid=low+(high-low)/2;
    while(low<=high){
        if(tar==a[mid]){
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>tar) high=mid-1;
        else low=mid+1;
        mid=low+(high-low)/2;
    }
    cout<<ans;
    
    return 0;
}