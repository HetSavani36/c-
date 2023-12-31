#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[]={3,2,3,1,4,9,7,6,3,5,8,6,2,7};
    int n=14,sum=0;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX,idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min) {
                min=arr[j];
                idx=j;    
            }
        }
        swap(arr[i],arr[idx]);
        sum=arr[0]+arr[1];
    }
    cout<<sum;
    return 0;
}