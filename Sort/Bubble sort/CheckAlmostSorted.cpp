#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
    if(count==1) cout<<"almost sorted";
    
    return 0;
}