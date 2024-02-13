#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v; // 0 0 1 1 1 2 2 3 3 4 
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);

     int count = 0;
        for(int i=1;i<v.size();i++){
            if(v[count]!=v[i]){
                count++;
                v[count]=v[i];
            }
        }
        
        for(int i=0;i<count+1;i++){
            cout<<v[i]<<" ";
        }
        
    return 0;
}