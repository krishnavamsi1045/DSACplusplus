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

void display(node *head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
}

void reverse(node *&head){
    node *curr = head;
    node *previ= NULL;
    while(curr!=NULL){
        node *jai = curr->next;
        curr->next= previ;
        previ = curr;
        curr=jai;

    }
    head = previ;

}
void addition(node *head){
    node *temp = head;
    int carry=1;
    while(temp!=NULL){
       int ma = temp->data+carry;
       carry = ma/10;
       int digit = ma%10;
       temp->data=digit;
       temp=temp->next;
       if(carry==0) break;

    }
    if(carry!=0){
        
    }
}


int main(){

    node *a = new node(1);
    node *b = new node(3);
    node *c = new node(8);
   

    a->next=b;
    b->next=c;
    
    display(a);
    cout<<endl;
   

    reverse(a);

    display(a);
    cout<<endl;

     addition(a);
display(a);
cout<<endl;

 reverse(a);

    display(a);
    cout<<endl;
   







}