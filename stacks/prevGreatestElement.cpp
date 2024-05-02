#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevGreaterElements(vector<int>& nums) {
    stack<int> st;
    int n=nums.size();
    vector<int> pge(n);
    pge[0]=-1;
    st.push(nums[0]);
        
    for(int i=1;i<n;i++){
        //pop all elements in stack less than nums[i]
        while(st.size()>0 && st.top()<=nums[i]) st.pop();
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        st.push(nums[i]);
    }
    return pge;
}

int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    vector<int> ans=prevGreaterElements(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}