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
void levelOrder(node * root){
    if(root == NULL) return ;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data;
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);

        }
    }
}
void leftView(node * root,int level ,vector<int> &v){
    if(root == NULL) return;
    if(level == v.size()){
        v.push_back(root->data);
    }
    leftView(root->left,level+1,v);
    leftView(root->right,level+1,v);

}

void rightView(node * root,int level ,vector<int> &v){
    if(root == NULL) return;
    if(level == v.size()){
        v.push_back(root->data);
    }
    
    leftView(root->right,level+1,v);
    leftView(root->left,level+1,v);

}

int main(){
   node * head = CreateTree();
   cout<<endl;
   levelOrder(head);
   vector<int> v;
   cout<<endl;
   rightView(head,0,v);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}