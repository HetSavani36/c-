//valid square
#include<iostream>
using namespace std;

int main(){
    int n=35;
    int low=0,high=n;
    float mid=low+(high-low)/2;

    while(low<=high){

        if(mid*mid==n){
            cout<<"yes";
            break;
        }
        else if(mid*mid>n) high=mid-1;
        else low=mid+1;
        mid=low+(high-low)/2;
    }
    return 0;
}