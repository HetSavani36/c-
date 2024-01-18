#include<iostream>
using namespace std;

int pivot(int a[],int n){
    int low=0,high=n-1,mid=low+(high-low)/2;

    while(low<high){
        if(a[mid]>=a[0]) low=mid+1;
        else high=mid;
        mid=low+(high-low)/2;
    }
    return mid;
}


int main(){

    int a[]={4,5,6,7,0,1,2};
    int n=7,tar=5;
    int low=0,high=n-1,ans=-1,mid=low+(high-low)/2;

    int pivot1=pivot(a,n);
    
    while(low<=high){

        if(a[mid]==tar) {
                ans=mid;
                break;
            }
        else if(tar>=a[pivot1] && tar<=a[high]) low=mid;
        else if(tar<=a[pivot1-1] && tar>=a[low]) high=mid-1;
        mid=low+(high-low)/2;
    }

    cout<<ans;
}