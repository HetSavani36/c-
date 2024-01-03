#include<iostream>
using namespace std;

int main(){

    int a[]={7,9,1,2,3};
    int n=5,tar=2;
    int low=0,high=n-1,mid=low+(high-low)/2;

    while(low<=high){

        if(a[mid]==tar) {
                cout<<mid;
                break;
            }
        else if(a[mid]<tar) low=mid+1;
        else if(a[mid]>tar) high=mid-1;
        
        mid=low+(high-low)/2;
    }
    
    return 0;
}