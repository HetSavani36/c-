/*
1111111
1222221
1233321         
1234321
1233321
1222221
1111111
   number square

1111
1222
1233
1234
*/

#include<iostream>
using namespace std;
int main(){

    int i,j,s,n;
    cout<<"enter no. of lines: ";
    cin>>n;
    
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            int a=i,b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            cout<<n-min(a,b)+1;
         }
         cout<<endl;
        }
    return 0;
}
