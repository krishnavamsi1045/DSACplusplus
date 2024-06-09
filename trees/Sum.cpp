#include <iostream>
using namespace std;

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

void sumOfTree(node * root,int &sum){
    if(root == NULL) return ;
    sum +=root->data;
    sumOfTree(root->left,sum);
    sumOfTree(root->right,sum);


}

int main(){

    node * root = CreateTree();
    cout<<endl;
    int sum = 0;
    sumOfTree(root,sum);
    cout<<sum<<endl;
}