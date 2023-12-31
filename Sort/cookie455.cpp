#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int main(){
        vector<int> g={10,9,8,7};
        vector<int> s={5,6,7};

        int ch=4;
        int c=3;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        bool flag;
        for(int i=0;i<min(ch,c);i++){
            flag=false;
            for(int j=0;j<c;j++){
                 if(s[j]>=g[i]){
                     count++;
                     flag=true;
                     if(flag==true) break;
                 }
            }

        }
        cout<<count;
    
}
