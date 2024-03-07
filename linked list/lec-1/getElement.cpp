#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx>size || idx<0) cout<<"invalid";
        else if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtEnd(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    int getAtIdx(int idx){
        Node* temp=head;
        if(idx<0 || idx>size) return -1;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }

    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){

    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(70);
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.insertAtEnd(60);
    ll.insertAtIdx(2,30);
    ll.display();
    cout<<ll.getAtIdx(1);
    return 0;
}