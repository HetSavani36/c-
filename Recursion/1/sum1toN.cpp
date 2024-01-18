#include<iostream>
using namespace std;

void sum1(int sum,int n){
        if(n==0) {
            cout<<sum;
            return;
            }
        sum1(sum+n,n-1);
}

int main(){
    sum1(0,10);
    return 0;
}