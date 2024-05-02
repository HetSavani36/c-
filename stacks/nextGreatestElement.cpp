#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    stack<int> st;
    int n=nums.size();
    vector<int> nge(n);
    nge[n-1]=-1;
    st.push(nums[n-1]);
        
    for(int i=n-2;i>=0;i--){
        //pop all elements in stack less than nums[i]
        while(st.size()>0 && st.top()<=nums[i]) st.pop();
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        st.push(nums[i]);
    }
    return nge;
}

int main(){

    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    vector<int> ans=nextGreaterElements(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}