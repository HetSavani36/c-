
//iterative solution
//use 3 pointers previous,current and next
only logic

ListNode* p=NULL;
ListNode* n=NULL;
ListNode* c=head;

while(c!=NULL){
    n=c->next;
    c->next=p;
    p=c;
    c=n;
}
return p;

//another way is by recursion

//to reverse linked list by given index than break it into 3 parts and after 
//reversing middle one merge all.