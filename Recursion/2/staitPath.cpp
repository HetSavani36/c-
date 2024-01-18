//with one or two jumps return no of ways
//with one,two or three jumps return no of ways

#include<iostream>
using namespace std;

int way3(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return way3(n-1) + way3(n-2) + way3(n-3);
}

int way2(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return way2(n-1) + way2(n-2);
}
int main(){
    cout<<way3(4);
}