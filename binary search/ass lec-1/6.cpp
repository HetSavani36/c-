// coin storage 
// n=5
// 0 1 2
#include<iostream>
using namespace std;

int main(){
    int n=8;
    int low=1,high=n,mid=(high+low)/2,ans=-1;
    while(low<=high){

        if((mid*(mid+1)/2)==n){
            ans=mid;
            break;
        }

        else if((mid*(mid+1)/2)<n){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;

        mid=(low+high)/2;
    }
    cout<<ans;
    return 0;
}