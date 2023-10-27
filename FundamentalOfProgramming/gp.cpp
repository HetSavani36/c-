// print gp

#include<iostream>
using namespace std;
int main(){

    int i,n;
    cout<<"enter a number: ";
    cin>>n;
    int a=3;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a*=4;
    }
    return 0;
}