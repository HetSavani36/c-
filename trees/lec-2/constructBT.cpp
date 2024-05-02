#include<iostream>
#include<queue>
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
void traverseQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}

Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        
        if(arr[i]!=-1) l=new Node(arr[i]);
        else l=NULL;
        if(arr[j]!=-1) r=new Node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;
        
        if(l!=NULL) q.push(l);
        if(j!=n && r!=NULL) q.push(r);
        
        i+=2;
        j+=2;
    }
    return root;

}

int main(){

    int arr[]={1,2,-1,4,5,-1,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node* root=construct(arr,n);
    traverseQueue(root);
    return 0;   
}