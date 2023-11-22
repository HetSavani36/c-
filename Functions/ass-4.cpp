//count and square
#include<iostream>
using namespace std;

void count(int x){
    int j=0;
    while(x!=0){
        x=x/10;
        j++;
    }
    cout<<j*j;
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    count(n);
    return 0;
}