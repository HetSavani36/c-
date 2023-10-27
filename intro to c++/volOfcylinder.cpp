#include<iostream>
using namespace std;

int main(){
    float radius,height;
    const float pi= 3.14;

    cout<<"enter radius: ";
    cin>>radius;
    cout<<"enter heigth: ";
    cin>>height;
    float volume= pi* radius*radius*height;
    cout<<"\nvolume of cylinder: "<<volume;
    return 0;
}