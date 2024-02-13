#include<iostream>
using namespace std;

int main(){

    int nums[]={1,2,3,4}; //24 12 8 6
    int n=sizeof(nums)/sizeof(nums[0]);
    int pro=1;
    for(int i=0;i<n;i++){
        pro*=nums[i];
    }
    for(int i=0;i<n;i++){
        nums[i]=pro/nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}