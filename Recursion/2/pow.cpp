#include<iostream>
using namespace std;

int pow(int x,int y){
    int ans;
    if(y==1 || y==0) return x;
    if(y%2==0){
        ans=pow(x,y/2);
        return ans*ans;
    }
    else{
        ans=pow(x,y/2);
        return  ans*ans*x;
    }
}    

int main(){
    cout<<pow(3,3);
    return 0;
}