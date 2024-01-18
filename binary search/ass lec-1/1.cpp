//last occurance
//first occurance
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

    int a[]={1,2,3,3,4,4,4,5};
    int n=8,x=4;
    int last=lastOccurance(a,n,x);
    cout<<last<<endl;
    int first=firstOccurance(a,n,x);
    cout<<first;
    return 0;
}