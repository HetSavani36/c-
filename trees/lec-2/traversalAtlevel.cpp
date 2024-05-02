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
int level(Node* root){
    if(root==NULL) return 0;
    int l=level(root->left);
    int r=level(root->right);
    int lev=1+max(l,r);
    return lev;
}

void traverseltor(Node* root,int curr,int x){
    if(root==NULL) return;
    if(curr==x){
        cout<<root->val<<" ";
        return;
    }
    traverseltor(root->left,curr+1,x);
    traverseltor(root->right,curr+1,x);
    
}
void traversertol(Node* root,int curr,int x){
    if(root==NULL) return;
    traversertol(root->right,curr+1,x);
    traversertol(root->left,curr+1,x);
    if(curr==x){
        cout<<root->val<<" ";
        return;
    }
    
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

    int x=level(a);
    for(int i=1;i<=x;i++){
        traverseltor(a,1,i);
        cout<<endl;
    }
    for(int i=1;i<=x;i++){
        traversertol(a,1,i);
        cout<<endl;
    }
    return 0;   
}