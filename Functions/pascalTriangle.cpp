#include<iostream>
using namespace std;

int pascal(int n){
    for(int i=0;i<=n;i++){
        int current=1;
        for(int j=0;j<=i;j++){
            cout<<current;
            current=current*(i-j)/(j+1);
        }
        cout<<endl;
    }
}


int main(){

    int n;
    cout<<"enter rows: ";
    cin>>n;
    pascal(n);
    return 0;
}