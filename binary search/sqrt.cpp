#include<iostream>
using namespace std;

int main(){

    int n=16;
    int sqrt;
    int low=0,high=n-1,mid=low+(high-low)/2;

    int a[n];
    for(int i=0;i<=n;i++){
        a[i]=i;
    }
   
    while(low<=high){
        
        if(a[mid]*a[mid]==n) {
            sqrt=a[mid];
            break;
        }
        else if(a[mid]*a[mid]>n) high=mid-1;
        else if(a[mid]*a[mid]<n) low=mid+1;
        mid=(high+low)/2;
    }
    cout<<sqrt;
    return 0;
}