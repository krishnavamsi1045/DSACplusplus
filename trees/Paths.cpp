#include <iostream>
using namespace std;
#include <queue>
#include <vector>

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

node * CreateTree(){
cout<<"enter the data:"<<" ";
int data ;
cin>>data;
if(data == -1) return NULL;
node *root = new node(data);
cout<<"enter data for left of"<<root->data;
root->left = CreateTree();
cout<<"enter data for right of"<<root->data;
root->right = CreateTree();
return root;

}
void Inorder(node *root){
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
 
 void levelOrder(node *root){
    if(root == NULL) return ;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
 }
 void path(node *root ,vector<int> temp,vector<vector<int > > &ans){
    if(root == NULL){
        return ;
    }
    temp.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        ans.push_back(temp);
        
    }
    
    path(root->left,temp,ans);
    path(root->right,temp,ans);
    
}

int main(){
    node * root = CreateTree();
    Inorder(root);
    cout<<endl;
    levelOrder(root);
    vector<int> temp;
    vector<vector<int> > ans;
    path(root,temp,ans);
    cout<<endl;
    cout<<endl;

   for(vector<int> loop :ans){
     cout<<"[";
    for(int i=0;i<loop.size();i++){
       cout<<loop[i];
        if( i != loop.size()-1){
            cout<<",";
        }
     
    }
    cout<<"]";
   }
}
