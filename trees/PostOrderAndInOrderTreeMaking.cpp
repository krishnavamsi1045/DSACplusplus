#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Level Order
void LevelOrderTraversal(node* root) {
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1) {
        node* temp = q.front();
        q.pop();
        if (temp == NULL) {
            cout << endl;
            q.push(NULL);
        }
        else {
            cout << temp->data << " ";
            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }
    }
}

// Find the index of the targetElement
int TargetIndex(int InOrder[], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (InOrder[i] == target) {
            return i;
        }
    }
    return -1;
}

// Creating Tree
node* creatingTreeThroughArrays(int PostOrder[], int InOrder[], int size, int& PostIndex, int InStart, int InEnd) {
    if (size < 0 || InStart > InEnd) {
        return NULL;
    }
    int element = PostOrder[PostIndex];
    PostIndex--;
    int idx = TargetIndex(InOrder, element, size);

    node* root = new node(element);
    root->left = creatingTreeThroughArrays(PostOrder, InOrder, size, PostIndex, InStart, idx - 1);
    root->right = creatingTreeThroughArrays(PostOrder, InOrder, size, PostIndex, idx + 1, InEnd);
    
    return root;
}

int main() {
    int PostOrder[] = { 8,6,14,4,10,2 };
    int Inorder[] = { 8,14,6,2,10,4 };
    int size = 6;
    int PostIndex = 5;
    int InStart = 0;
    int InEnd = 5;
    node* root = creatingTreeThroughArrays(PostOrder, Inorder, size, PostIndex, InStart, InEnd);
    LevelOrderTraversal(root);
}
