#include <iostream>
using namespace std;
#include <queue>
#include <vector>
#include <map>

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

void topView(node * root){
    map<int,int> map;
    queue<pair<node *,int> > q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node * ,int> temp = q.front();
        q.pop();
        node * curr = temp.first;
        int now = temp.second;
        if(map.find(now) == map.end()){
            map[now] = curr->data;
        }
        if(curr->left != NULL){
            q.push(make_pair(curr->left,now-1));
        }
        if(curr->right != NULL){
            q.push(make_pair(curr->right,now+1));
        }

    }
    for(auto i: map){
        cout<<i.second<<" ";
    }

}

int main(){
 node *  root = CreateTree();
    cout<<endl;
    levelOrder(root);
    cout<<endl;
    topView(root);
}

