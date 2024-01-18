//decreasing order bs
#include<iostream>
using namespace std;
int main(){

    int a[]={8,7,6,5,4,3,2,1};
    int n=8;
    int ans=-1,tar=2,low=0,high=n-1,mid=low+(high-low)/2;

    while(low<=high){

        if(a[mid]==tar){
            ans=mid;
            break;
        }
        else if(a[mid]<tar) high=mid-1;
        else low=mid+1;
        mid=low+(high-low)/2;
    }
    cout<<ans;
    return 0;
}