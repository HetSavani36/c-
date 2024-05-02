#include<iostream>
#include<vector>
using namespace std;

// class stackArray{
// public:
//     int arr[5];
//     int idx=-1;
//     void push(int val){
//         if(idx==4){
//             cout<<"stack if full";
//             return;
//         }
//         idx++;
//         arr[idx]=val;
//     }
//     void pop(){
//         idx--;
//     }
//     int top(){
//         return arr[idx];
//     }
//     int size(){
//         return idx+1;
//     }
// };
// class stackVector{
// public:
//     vector<int> v;
//     void push(int val){
//         v.push_back(val);
//     }
//     void pop(){
//         v.pop_back();
//     }
//     int top(){
//         return v[v.size()-1];
//     }
//     int size(){
//         return v.size();
//     }
// };

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stackLL{
public:
    Node* head;
    int size;
    stackLL(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL) return;
        head=head->next;
        size--;
    }
    int top(){
        return head->val;
    }
};

int main(){

    stackLL st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    cout<<st.top();
    cout<<endl<<st.size;
    return 0;
}