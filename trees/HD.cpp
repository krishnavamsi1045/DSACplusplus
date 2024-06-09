#include <iostream>
#include <vector>
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

node* createTree() {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    if (data == -1) return NULL;
    node* head = new node(data);
    cout << "Enter data for left of " << head->data << ": ";
    head->left = createTree();
    cout << "Enter data for right of " << head->data << ": ";
    head->right = createTree();
    return head;
}

void preOrder(node* head) {
    if (head == NULL) return;
    cout << head->data << " ";
    preOrder(head->left);
    preOrder(head->right);
}

int height(node* head) {
    if (head == NULL) return 0;

    int opt1 = height(head->left) + 1;
    int opt2 = height(head->right) + 1;

    return max(opt1, opt2);
}

vector<int> diameter(node* head, int& maxDiameter) {
    if (head == NULL) return {0, 0};

    vector<int> result = {0, 0};

    vector<int> leftDia = diameter(head->left, maxDiameter);
    vector<int> rightDia = diameter(head->right, maxDiameter);

    int leftHeight = leftDia[0];
    int rightHeight = rightDia[0];

    int opt1 = leftHeight + rightHeight;
    int opt2 = leftDia[1];
    int opt3 = rightDia[1];

    int localDiameter = max(opt1, max(opt2, opt3));

    if (localDiameter > maxDiameter) {
        maxDiameter = localDiameter;
        result = {max(leftHeight, rightHeight) + 1, head->data};
    }

    return result;
}

int main() {
    node* head = createTree();

    cout << "Preorder traversal: ";
    preOrder(head);
    cout << endl;

    int maxDiameter = 0;
    vector<int> result = diameter(head, maxDiameter);
    cout << "Diameter: " << maxDiameter << endl;
    cout << "Path: " << result[1] << " ";
    return 0;
}
