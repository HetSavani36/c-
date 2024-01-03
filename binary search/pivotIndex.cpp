#include<iostream>
using namespace std;
int main(){

    int a[]={3,8,10,17,1};
    int n=5;
    int low=0,high=n-1,mid=low+(high-low)/2;

    while(low<high){
        if(a[mid]>=a[0]) low=mid+1;
        else high=mid;
        mid=low+(high-low)/2;
    }
    cout<<mid;
    return 0;
}
