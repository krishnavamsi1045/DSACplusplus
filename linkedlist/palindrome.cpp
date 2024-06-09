#include <iostream>
using namespace std;

class node{
    public :
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
        temp= temp->next;
    }
}
void reverse(node *&head){
    node *prev = NULL;
    node *curr = head;
    while(curr != NULL){
        node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}


//finding middle element by slow tortise and fast rabit
node * midnode(node * head){
   
    node* rabbit = head;
    node* tortise = head;
    while(rabbit->next!=NULL){
        rabbit=rabbit->next;
        if(rabbit->next!=NULL){
            rabbit=rabbit->next;
            tortise=tortise->next;
            
        }
    }
    return tortise;
}

bool compareList(node * &head,node *&newHead){
    if(head->data!=newHead->data){
        return false;
    }
    head=head->next;
    newHead=newHead->next;
    return true;
}



int main(){

    node *a  = new node(10);
    node *b = new node(20);
    node *c = new node(20);
    node *d = new node(10);
    node *e  = new node(100);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next= e;

    node *temp = a;

   print(temp);
   cout<<endl;
    reverse(temp);

   print(temp);

   node *ans = midnode(temp);
   node* newHead = ans->next;
   cout<<endl;
   reverse(newHead);
   print(newHead);
   ans->next= NULL;
   cout<<endl;

  cout<< compareList(temp,newHead);


}