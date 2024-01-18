//with one,two or three jumps return no of ways

#include<iostream>
using namespace std;

int way(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return way(n-1) + way(n-2) + way(n-3);
}

int main(){
    cout<<way(4);
}