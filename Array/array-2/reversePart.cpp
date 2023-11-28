#include<iostream>
#include<vector>
using namespace std;

void reverse(int x,int y,vector<int> &a){
    int i,j;
    for(i=x,j=y;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
    for(i=0;i<a.size();i++){
            cout<<a[i];
    }
}
int main(){

    int i,n;
    vector<int> a;
    cout<<"enter size: ";
    cin>>n;

    for(i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    reverse(0,4,a);

}