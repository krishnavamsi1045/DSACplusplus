#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;

    }
};
void print(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
node * reverse(node *&head,int k){

    if(head==NULL) return head;
    if(head->next==NULL) return head;
int pos=0;
   node *prev = NULL;
   node *curr = head;
  node *nextnode = curr->next;
   
   while(pos<k){
     nextnode = curr->next;
     curr->next=prev;
     prev=curr;
     curr=nextnode;
     k++;

   }
   node * recans = NULL;
   if(recans!=NULL){
    recans= reverse(nextnode,k);
   }


}

int main(){

    node *a = new node(1);
    node *b = new node(2);
     node *c = new node(3);
      node *d = new node(4);
       node *e = new node(5);


       a->next = b;
       b->next =c;
       c->next=d;

    print(a);
    cout<<endl;
}