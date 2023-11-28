#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count=0;
    int v[]={1,2,1,4,2,3,4,5,5};
    int n=sizeof(v)/4;
    bool flag;

    for(int i=0;i<n;i++){
    
        flag=true;
    
        for(int j=0;j<n;j++){
            
            if(j==i) continue;
            if(v[i]==v[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<v[i]<<" is unique";
        }
    }
    return 0;
}