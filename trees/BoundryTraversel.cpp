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
void leftHand(node *temp){
    if(temp == NULL) return;
   if(temp->left == NULL && temp->right == NULL){
    return;
   }
   cout<<temp->data<<" ";   
   if(temp->left != NULL){
    leftHand(temp->left);
   }
   else{
    leftHand(temp->right);
   }
}
void rightHand(node *temp){
    if(temp==NULL) return;
    if(temp->left != NULL && temp->right == NULL){
       return;

    }
   
    if(temp->right != NULL){
        rightHand(temp->right);
    }
    else{
        rightHand(temp->left);
    }
     cout<<temp->data<<" ";
}
void leafNode(node *temp){
    if(temp == NULL)return;
    if(temp->left == NULL && temp->right == NULL){
        cout<<temp->data<<" ";
        return;
    }
    leafNode(temp->left);
    leafNode(temp->right);
}

void boundaryTraversal(node * temp){
    cout<<temp->data<<" ";
leftHand(temp->left);
leafNode(temp->left);
leafNode(temp->right);
rightHand(temp->right);
}
  



int main(){
   node * root= CreateTree();
    boundaryTraversal(root);

}