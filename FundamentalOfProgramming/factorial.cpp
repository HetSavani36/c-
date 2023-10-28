#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int fact=1,i,n;
    cout<<"enter number: ";
    cin>>n;

    for(i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
    return 0;
}