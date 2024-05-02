#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
}

void removeEven(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==1){
            int x=q.front();
            q.push(x);
        }
        q.pop();
    }
}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    removeEven(q);
    display(q);
    return 0;
}