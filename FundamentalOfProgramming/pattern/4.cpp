

#include<iostream>
using namespace std;
int main(){

    int i,j,s;

    for(i=1;i<=4;i++){
        for(s=1;s<=4-i;s++){
            cout<<" ";
        }
        for(j=1;j<=4;j++){
            cout<<"*";
        }
        for(s=1;s<=i-1;s++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
