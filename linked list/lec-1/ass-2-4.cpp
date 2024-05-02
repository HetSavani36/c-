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
    Node* remove(Node* head, int val) {
        Node* temp=head;
        Node* c=new Node(100);
        Node* tempC=c;
        while(temp!=NULL){
            if(temp->val!=val){
                tempC->next=temp;
                temp=temp->next;
            }
            else temp=temp->next;
        }
        //display(c->next);
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

    void deleteAtTail(){
        Node* temp=head;
        for(int i=1;i<size-1;i++){
            temp=temp->next;
        }
        if(size>=1){
            temp->next=NULL;
            tail=temp;
        }
        size--;
    }
    
    void deleteAtHead(){
        if(size>=1){
            head=head->next;
            size--;
        }
    }
    
    void deleteAtIdx(int idx){
        Node* temp=head;
        if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        size--;
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
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(6);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.insertAtEnd(6);
    ll.display();
    cout<<endl;
    Node* t=remove(ll,6);
    ll.display();
    return 0;
}