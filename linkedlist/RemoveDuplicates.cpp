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
void remove_duplicates(node *head){
    
    node *temp = head;
    while(temp!=NULL){
        if(temp->data ==temp->next->data){
            temp->next =temp->next->next;
        }
        else
        temp=temp->next;
    }
}


int main(){

     node *a  = new node(10);
    node *b = new node(20);
    node *c = new node(20);
    node *d = new node(100);
    node *e  = new node(100);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next= e;

    print(a);
    cout<<endl;

    remove_duplicates(a);
     print(a);
    cout<<endl;
}