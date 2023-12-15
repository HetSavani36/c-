#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;

    vector<string> v;
    string temp;

    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=stoi(v[i]);
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]) max=arr[j];
        }
    }
    cout<<"largest is "<<max;
}