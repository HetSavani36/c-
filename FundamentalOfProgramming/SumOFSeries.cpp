// 1-2+3-4+5-6.......


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sum=0,i,n;
    cout<<"enter terms: ";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=pow(-1,i+1)*i;
    }
    cout<<sum;
    return 0;
}