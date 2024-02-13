#include<iostream>
#include<vector>
using namespace std;

int partition(int a[],int si,int ei){
    int piEle=a[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(a[i]<=piEle) count++;
    }
    int piIdx=count+si;
    swap(a[(si+ei)/2],a[piIdx]);
    int i=si,j=ei;
    while(i<piIdx && j>piIdx){
        if(a[i]<=piEle) i++;
        if(a[j]>piEle) j--;
        else if(a[i]>piEle && a[j]<=piEle){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return piIdx;
}

void sort(int a[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(a,si,ei);
    sort(a,pi+1,ei);
    sort(a,si,pi-1);
}


int main(){

    int a[]={5,4,3,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
