#include<iostream>
#include<climits>
using namespace std;


int main(){

    int a[]={5,1,4,3,2};
    int n=5;
    for(int i=0;i<n-1;i++){

        int min=INT_MAX;
        int k=-1;

        for(int j=i;j<n;j++){
            if(a[j]<min) {
                min=a[j];
                k=j;
        }   
    }
        swap(a[i],a[k]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}