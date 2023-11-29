#include<iostream>
using namespace std;

int main(){
    int n;

    int a[]={2,2,1,0,1,0};
    n=sizeof(a)/4;
    int mid=0,low=0,high=n-1;
    
     while(mid<=high){
        if(a[mid]==2){
            int temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;
        }
        else if(a[mid]==0){
            int temp=a[mid];
            a[mid]=a[low];
            a[low]=temp;
            mid++;
            low++;
        }
        else{
            mid++;
        }
     }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
     
    return 0;
}