#include<iostream>
using namespace std;

int main(){
    char a,b;
    cout<<"enter characters separated by space: ";
    cin>>a>>b;

    int c=(int)a-(int)b;
    cout<<"diff: "<<-c;
    return 0;
}