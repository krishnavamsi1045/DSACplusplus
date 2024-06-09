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


int d=0;
int height(node * head){
    if(head == NULL) return 0;

    int left = height(head->left);
    int right = height(head->right);

    int currDia = left+right;

    d = max(currDia,d);

    return max(left,right)+1;

}

int main(){

node *head = CreateTree();

height(head);
cout<<d<<endl;


}