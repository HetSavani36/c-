#include<iostream>
using namespace std;

int sum(int x,int y){
    if(x>y) return 0;
    if(x%2==0) return sum(x+1,y);
    return x+sum(x+2,y);
}

int main(){
    cout<<sum(2,9);
    return 0;
}