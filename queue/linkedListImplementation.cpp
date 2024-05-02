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

class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    
    void popf(){
        if(size>=1){
            head=head->next;
            size--;
        }
    }
    void popb(){
        Node* temp=tail->prev;
        if(size==1){
            popf();
            return;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void pushb(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=tail->next;
        }
        size++;
    }
    void pushf(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    
};

int main(){

    Queue s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.display();
    return 0;
}