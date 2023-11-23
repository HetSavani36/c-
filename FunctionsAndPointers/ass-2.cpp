//circle area
#include<iostream>
using namespace std;

void area(int x){
    printf("%.2f",3.14*x*x);
}

int main(){
    int n;
    cout<<"enter radius: ";
    cin>>n;
    area(n);
    return 0;
}