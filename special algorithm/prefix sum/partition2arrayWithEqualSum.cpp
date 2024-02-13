#include<iostream>
using namespace std;

int main(){

    int nums[]={1,2,3,4,5,6,7,8,9}; //1 3 6 10 15 21 28 36 45
    int n=sizeof(nums)/sizeof(nums[0]);

    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }

    bool flag = false;
    for(int i=0;i<n;i++){
        if((2*nums[i])==nums[n-1]){
            flag = true;
        }
    }
    
    if(flag==true) cout<<"can partitioned";
    else cout<<"cannot be partitioned";
    return 0;
}