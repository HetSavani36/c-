#include<iostream>
#include<vector>
using namespace std;

void BruteForcenext(int arr[],int n){//t.C=O(n^2)
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans.push_back(arr[j]);
                return;
            }  
            else ans.push_back(-1);  
        }
    }
    
    int i=0;
    while(i==n-1){
        cout<<ans[i]<<" ";
        i++;
    }
}


int main(){

    int arr[]={3,1,2,5,4,6,2,3};
    next(arr,8);
   return 0;   
}