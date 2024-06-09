#include <iostream>
using namespace std;

class node{
public:
int data;
node* next;
node *prev;

node(int data){
  this->data = data;
  this->prev=NULL;
    this->next =NULL;
}
};

//Insert At Head
void insertAtHead(node* &head,node* &tail,int data){
    if(head==NULL){
        node *temp = new node(10);
        head=temp;
        head->prev=NULL;

    }
    else{
        node *temp = new node(10);
        temp->next=head;
        head=temp;
        head->prev=NULL:
    }

}


int main() {

  node *head =NULL;
  node *tail =NULL;
}