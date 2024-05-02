#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}                                             

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int product(Node* root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}

int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maxValue(Node* root){
    if(root==NULL) return -999999999;
    int lmax=maxValue(root->left);
    int rmax=maxValue(root->right);
    return max(root->val,max(lmax,rmax));
}

int level(Node* root){
    if(root==NULL) return 0;
    int l=level(root->left);
    int r=level(root->right);
    int lev=1+max(l,r);
    return lev;
}

int main(){

    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    display(a);
    cout<<endl<<sum(a);
    cout<<endl<<size(a);
    // cout<<endl<<maxValue(a);
    // cout<<endl<<product(a);
    // cout<<endl<<level(a);
    return 0;   
}