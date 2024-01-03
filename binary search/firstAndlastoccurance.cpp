#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int firstOccurance(int a[],int n,int tar){
    int low=0,high=n-1,ans;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==tar) {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]>tar) high=mid-1;
        else if(a[mid]<tar) low=mid+1;
    }
    return ans;
}

int lastOccurance(int a[],int n,int tar){
    int low=0,high=n-1,ans;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==tar) {
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]>tar) high=mid-1;
        else if(a[mid]<tar) low=mid+1;
    }
    return ans;
}
int main(){

    int a[]={1,3,5,7,9,10,11,11,11,11,13,15};
    int first=firstOccurance(a,12,11);
    cout<<first<<endl;
    
    int last=lastOccurance(a,12,11);
    cout<<last;
    return 0;
}
