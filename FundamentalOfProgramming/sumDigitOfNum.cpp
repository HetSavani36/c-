#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter a number: ";
    cin>>n;
    a=n;
    int i,j=0,sum=0,rem;
    if(n==0){
        j=1;
    }
    for(i=1;n!='\0';i++){
        n=n/10;
        j++;
    }
    n=a;
    for(i=1;i<=j;i++){
        rem=a%10;
        sum+=rem;
        a=a/10;

    }
    cout<<sum;
    return 0;
}