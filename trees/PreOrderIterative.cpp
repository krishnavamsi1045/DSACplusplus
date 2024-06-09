#include <iostream>
using namespace std;
#include <vector>
#include <stack>


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

vector<node *> preOrder(node * head){
    vector<node *> v;
    if(head == NULL) return v;
    stack<node * > q;
    q.push(head);
    while(!q.empty()){
        node * temp = q.top();
        q.pop();
        v.push_back(temp);
        if(temp->right != NULL) q.push(temp->right);
        if(temp->left !=NULL) q.push(temp->left);

    }
    return v;


}

int main(){

    node *temp = CreateTree();

    vector<node *> v;
   v= preOrder(temp);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}