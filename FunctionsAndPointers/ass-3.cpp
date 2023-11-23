//odd no between
#include<iostream>
using namespace std;

void odd(int x,int y){
    for(int i=x;i<=y;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n1,n2;
    cout<<"enter starting number: ";
    cin>>n1;
    
    cout<<"enter ending number: ";
    cin>>n2;
    odd(n1,n2);
    return 0;
}