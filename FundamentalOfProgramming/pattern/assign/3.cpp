#include<iostream>
using namespace std;
int main(){

    int i,j,s,k=1;
    for(i=1;i<=4;i++){
        for(s=1;s<=4-i;s++){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<(char)(j+64);
        }
        for(j=1;j<=i-1;j++){
            cout<<(char)(j+65);
        }
        for(s=1;s<=4-i;s++){
            cout<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}