#include<iostream>
using namespace std;

//to find sum bet index a to b
//sum=preArray[b]-preArray[a-1];

int main(){

    int nums[]={1,2,3,4};
    int n=sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<n;i++){
        if(i>=1) nums[i]=nums[i]+nums[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}