#include<iostream>
using namespace std;
int main(){

    int a[]={3,5,3,2,0};
    int n=5;
    int low=0,high=n-1,mid=low+(high-low)/2;

    while(low<high){
        if(a[mid]<a[mid+1]) low=mid+1;
        else high=mid;
        mid=low+(high-low)/2;
    }
    cout<<mid;
    return 0;
}
