#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->next = NULL;
        this->data = data;
    }
};

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node* &head,node* &tail) {
    node* temp = new node(500);
    temp->next = head;
    head = temp;
    tail=temp;
}
void insertAtEnd(node* &tail,node* &head){
    if(head==NULL){
        node *temp = new node(88);
        tail->next  =temp;
        tail=temp;
        head= temp;
    }
    else{
        node *temp = new node(88);
        tail->next  =temp;
        tail=temp;

    }

}

int main() {
    node* a = new node(5);
    node* b = new node(8);
    node* c = new node(2);
    node* d = new node(9);

    // Linking the nodes
    a->next = b;
    b->next = c;
    c->next = d;

    // Setting the head of the list
    node* head = a;
    node* tail=d;

    // Insert a new node at the beginning of the list
    insertAtHead(head,tail);

    //Insert a new node at the ending of the list
    insertAtEnd(tail,head);

    // Display the list
    display(head);
}
