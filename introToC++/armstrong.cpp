#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n,x,rem,count=0,sum=0;
    cout<<"enter no: ";
    cin>>n;
    x=n;

    while(n!=0){
        n=n/10;
        count++;
    }
    n=x;
    while(n!=0){
        rem=n%10;
        sum+=pow(rem,count);
        n/=10;
    }
    cout<<sum;
    if(sum==x){
        cout<<"arm";
    }
    else cout<<"non";
    return 0;
}