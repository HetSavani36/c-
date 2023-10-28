#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a=1,b=1,c=0,n,i;
    cout<<"enter number: ";
    cin>>n;

    for(i=1;i<=n-2;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c;
    }
    cout<<c;
    return 0;
}