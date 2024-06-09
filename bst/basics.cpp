#include <iostream>
using namespace std;
#include <queue>

class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data){
        this->data = data;
        this->left =NULL;
        this->right =NULL;
    }
};

node* makingBst(node *root,int data){
        if(root == NULL){
         root = new node(data);
         return root;
        }
        if(data>root->data){
            root->right = makingBst(root->right,data);
        }
        else{
            root->left = makingBst(root->left,data);
        }
        return root;
}

void CreateBst(node *&root){
    cout<<"enter the data ";
    int data;
    cin>>data;
    while(data != -1){
        root = makingBst(root,data);
        cout<<"enter the data";
        cin>>data;
    }
}

void levelOrder(node * root){
    if(root == NULL) return;
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

void inOrder(node *root){
    if(root == NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void PreOrder(node *root){
    if(root == NULL) return ;
     cout<<root->data<<" ";
    inOrder(root->left);
   
    inOrder(root->right);
}
void postOrder(node *root){
    if(root == NULL) return ;
    
    inOrder(root->left);
   
    inOrder(root->right);
     cout<<root->data<<" ";
}
void  minValue(node *root){
    if(root == NULL) return ;
    if(root->left == NULL  && root->right == NULL){
        cout<<root->data<<" this is the minimum value";
    }
    minValue(root->left);
   
}

void  maxValue(node *root){
    if(root == NULL) return ;
    if(root->left == NULL  && root->right == NULL){
        cout<<root->data<<" this is the maximun value";
    }
    maxValue(root->right);
   
}
node * maxi(node *temp){
    if(temp == NULL) return NULL;
    while(temp->right != NULL){
        temp= temp->right;
    }
    return temp;
}

//is TargetValue is Present Or Not

bool isPresent(node * root,int targetValue){
    if(root == NULL) return false;
    if(root->data == targetValue) return true;
    bool left = false;
    bool right = false;
    if(targetValue >root->data){
        bool right = isPresent(root->right,targetValue);
    }
    else{
        bool left = isPresent(root->left,targetValue);
    }
    return  right || left;
}



int main(){
    node *root = NULL;
    CreateBst(root);
    cout<<endl;
   
   
    bool ans= isPresent(root,870);   
    cout<<ans<<endl;

}