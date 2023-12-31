#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={8,9,6,11,5,15};
    int n=6;
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]) swap(arr[j+1],arr[j]);
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}