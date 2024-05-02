//used to display ll in reverse order
//if any singke node is given we can traverse to entire ll


#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx>size || idx<0) cout<<"invalid";
        else if(idx==0) insertAtHead(val);
        else if(idx==size-1) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }

    void deleteAtTail(){
        Node* temp=tail->prev;
        if(size==1){
            deleteAtHead();
            return;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    
    void deleteAtHead(){
        if(size>=1){
            head=head->next;
            if(head!=NULL) head->prev=NULL;
            if(head==NULL) tail=NULL;
            size--;
        }
    }
    
    void deleteAtIdx(int idx){
        Node* temp=head;
        if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
        }
        size--;
    }
    
    int getAtIdx(int idx){
        if(idx<0 || idx>size) return -1;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp=head;
                for(int i=1;i<=idx;i++){
                temp=temp->next;
                }
                return temp->val;
            }
            else{
                Node* temp=tail;
                for(int i=1;i<size-idx;i++){
                    temp=temp->prev;
                }
                return temp->val;
            }
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
    ll.insertAtTail(20);
    ll.insertAtHead(10);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);
    ll.display();
    cout<<ll.getAtIdx(3);
    return 0;
}