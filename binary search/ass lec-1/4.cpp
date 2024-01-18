#include<iostream>
using namespace std;

int main(){

    int a[]={1,2,3,4,4,4,5};
    int n=7,ans=-1;
    int low=0,high=n-1,mid=low+(high-low)/2;

    while(low<=high){

        if(mid+1==a[mid]){
            low=mid+1;
        }

        else if(mid+1!=a[mid]){
            ans=mid;
            high=mid-1;
        }

        mid=low+(-low+high)/2;
    }
    cout<<ans;
 
    return 0;
}