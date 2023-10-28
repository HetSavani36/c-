#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int i,n,a,j=0,arm=0,rem;
    cout<<"enter a number: ";
    cin>>n;
    a=n;
    for(i=1;n!=0;i++){
        n=n/10;
        j++;
    }
	n=a;
    for(i=1;i<=j;i++){
        rem=n%10;
        arm+=pow(rem,j);
        n=n/10;
    }
	
    if(a==arm){
        cout<<"armstrong";
    }
    else{
        cout<<"non-armstrong";
    }
    return 0;
}
