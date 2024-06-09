#include <iostream>
using namespace std;
#include <queue>

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }


};

node* CreateTree(){
    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;
    node *head = new node(data);
    cout<<"enter left of:"<<head->data<<endl;
    head->left = CreateTree();
    cout<<"enter right of:"<<head->data<<endl;
    head->right = CreateTree();
    return head;
}
void PreOrder(node *head){
    if(head == NULL) return;
    cout<<head->data<<endl;
    PreOrder(head->left);
    PreOrder(head->right);
}
void LevelOrder(node *head){
    if(head == NULL) return ;
    queue<node *> q;
    q.push(head);
    q.push(NULL);
    while(q.size()>1){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
    
        }

    }

}
void levelOrder2(node *head) {
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

int main(){

        node *head = CreateTree();
        cout<<endl;
        PreOrder(head);
        LevelOrder(head);
}