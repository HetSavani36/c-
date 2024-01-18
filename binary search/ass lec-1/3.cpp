#include<iostream>
using namespace std;

int n=4,m=4;
int lastOccurance(int a[n][m],int n,int x){
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

int firstOccurance(int a[n][m],int n,int x){
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

    int a[4][4]={{0,1,1,0},{1,1,1,1},{1,0,0,0},{1,1,1,0}};
    int n=4,m=4,x=1,int maxcount=0,count,ans;

    for(int i=0;i<n;i++){
        int l = lastOccurance(a,n,x);
        int f = firstOccurance(a,n,x);
        count=l-f+1;
        if(count>maxcount){
            ans=i;
        }
        maxcount=max(count,maxcount);
    }
    cout<<ans;

    return 0;
}