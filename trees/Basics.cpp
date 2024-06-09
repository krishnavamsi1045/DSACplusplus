#include <iostream>
using namespace std;
#include <queue>

class node {
public:
  int data;
  node *left;
  node *right;
  node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node *CreateTree() {
  cout << "enter the data" << endl;
  int data;
  cin >> data;
  if (data == -1)
    return NULL;
  node *head = new node(data);
  cout << "enter left of node :" << data << endl;
  head->left = CreateTree();
  cout << "enter right of node :" << data << endl;
  head->right = CreateTree();
  return head;
}
void PreOrderdisplay(node *head) {
  if (head == NULL)
    return;
  cout << head->data << " ";
  PreOrderdisplay(head->left);
  PreOrderdisplay(head->right);
}
void Inorderdisplay(node *head) {
  if (head == NULL)
    return;
  Inorderdisplay(head->left);
  cout << head->data << " ";
  Inorderdisplay(head->right);
}
void Postorderdisplay(node *head) {
  if (head == NULL)
    return;
  Postorderdisplay(head->left);
  Postorderdisplay(head->right);
  cout << head->data << " ";
}
void levelOrder(node *head) {
  if (head == NULL)
    return;
  queue<node *> q;

  q.push(head);
  q.push(NULL);
  while (q.size()>1) {
    

    node *temp = q.front();
     q.pop();
    if(temp  == NULL){
        cout<<endl;
        q.push(NULL);
       

    }
    else{
    cout << temp->data << " ";
   
    if (temp->left != NULL) {
     
     q.push(temp->left);
    }
    if (temp->right != NULL)
      
    q.push(temp->right);
    }

  }
  
  
  
}

int main() {

  node *head = CreateTree();
  PreOrderdisplay(head);
  cout << endl;
  Inorderdisplay(head);
  cout << endl;
  Postorderdisplay(head);
  cout << endl;
  levelOrder(head);
}