#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    vector<int> arr;
    int f,b,size;
    Queue(int n){
        f=0,b=0,size=0;
        vector<int> v(n);
        arr=v;
    }
    void push(int val){
        if(size==arr.size()) {
            cout<<"queue is full";
            return;
        }
        arr[b]=val;
        b++;
        size++;
    }
    void pop(){
        if(arr.size()==0){
            cout<<"queue is empty";
            return;
        }
        f++;
        size--;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
    }
    int front(){
        if(size==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(size==0){
            cout<<"queue is empty";
            return -1;
        }
        return arr[b-1];
    }
};

int main(){

    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display();
    return 0;
}