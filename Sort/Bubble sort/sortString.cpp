#include<iostream>
#include<climits>
#include<string>
using namespace std;
int main(){

    string str[5]={"het","muko","om","dhamo","raju"};
    int n=5;
    bool flag;
    for(int i=0;i<n-1;i++){
        flag=true;
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]) {
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
        for(int i=0;i<n;i++){
            cout<<str[i]<<" ";
        }
}