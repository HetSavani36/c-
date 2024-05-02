#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stock(vector<int>& nums) {
    stack<int> st;
    int n=nums.size();
    vector<int> stock(n);
    stock[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && nums[st.top()]<=nums[i]){
            st.pop();
        }
        if(st.size()==0) stock[i]=-1;
        else stock[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        stock[i]=i-stock[i];
    }
    return stock;
}

int main(){

    vector<int> v;
    v.push_back(100);
    v.push_back(80);
    v.push_back(60);
    v.push_back(81);
    v.push_back(70);
    v.push_back(60);
    v.push_back(75);
    v.push_back(85);
    vector<int> ans=stock(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}