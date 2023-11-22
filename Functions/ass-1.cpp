//square
#include<iostream>
using namespace std;

void square(int x){
    printf("%d",x*x);
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    square(n);
    return 0;
}