#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n1,n2,i,n3=1;
    cout<<"enter a number: ";
    cin>>n1;
    cout<<"enter a number: ";
    cin>>n2;
    for(i=1;i<=n2;i++){
        n3*=n1;
    }
    cout<<n3<<endl;
    cout<<pow(n1,n2);
    return 0;
}