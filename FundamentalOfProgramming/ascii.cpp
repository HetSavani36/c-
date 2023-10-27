//WAP to print ascii value of 26 alphabets using while loop 

#include<iostream>
using namespace std;
int main(){

    int i=0;

    while(i<26){
        cout<<(int)(i+'A')<<endl;
        i++;
    }
    return 0;
}