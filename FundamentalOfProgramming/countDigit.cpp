#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int i,j=0;
    if(n==0){
        j=1;
    }
    for(i=1;n!='\0';i++){
        n=n/10;
        j++;
    }
    cout<<j;
    return 0;
}