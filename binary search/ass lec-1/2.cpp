//total no of occurance 

#include<iostream>
using namespace std;

int lastOccurance(int a[],int n,int x){
    int low=0,high=n-1,mid=low+(high-low)/2,ans=-1;

    while(low<=high){

        if(a[mid]==x){
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]<x) low=mid+1;
        else if(a[mid]>x) high=mid-1;
        mid=low+(high-low)/2;
    }
    return ans;
}

int firstOccurance(int a[],int n,int x){
    int low=0,high=n-1,mid=low+(high-low)/2,ans=-1;

    while(low<=high){

        if(a[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<x) low=mid+1;
        else if(a[mid]>x) high=mid-1;
        mid=low+(high-low)/2;
    }
    return ans;
}

int main(){

    int a[]={0,0,0,0,1,1};
    int n=6,x=1;
    int l = lastOccurance(a,n,x);
    int f = firstOccurance(a,n,x);
    cout<<l-f+1;
}