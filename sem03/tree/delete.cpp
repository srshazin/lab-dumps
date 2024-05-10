#include "binaryTree.h";

Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* temp = root->right;
        while (temp->left != nullptr) {
            temp = temp->left;
        }

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main(){
    Node* root = nullptr;
    cout<<"How many Node you wanna insert ? ";
    int n, a; cin>>n;
    while(n--){
        cin>>a;
        root = insert(root, a);
    }
    cout<<"Enter the element you wanna delete : "; cin>>a;
    root = deleteNode(root , a);

    cout<<"Inorder : ";inorder(root);
    return 0;
}
