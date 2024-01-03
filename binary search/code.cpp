#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int a[]={1,3,5,7,9,11,13,15};
    int n=8;
    
    int tar=11,low=0,high=n-1;

    while(low<=high){
        int mid=(high+low)/2;
        if(a[mid]==tar) {
            cout<<mid;
            break;
        }
        else if(a[mid]>tar) high=mid-1;
        else if(a[mid]<tar) low=mid+1;
    }

    return 0;
}