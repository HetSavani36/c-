#include<iostream>
using namespace std;

// int pascal(int n){
//     for(int i=0;i<=n;i++){
//         int current=1;
//         for(int j=0;j<=i;j++){
//             cout<<current;
//             current=current*(i-j)/(j+1);
//         }
//         cout<<endl;
//     }
// }


int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int x,int y){
     int ncr=fact(x)/(fact(y)*fact(x-y));
    return ncr;
}

int main(){

    int n;
    cout<<"enter rows: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j);
        }
        cout<<endl;
    }
    return 0;
}