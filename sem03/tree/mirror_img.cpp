#include "binaryTree.h";

Node* mirrorTree(Node* root){
    if(root == nullptr){
        return nullptr;
    }

    Node* temp = root->left;
    root->left = mirrorTree(root->right);
    root->right = mirrorTree(temp);

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
    cout<<"Inorder (Original) : ";inorder(root);
    root = mirrorTree(root);
    cout<<"\nInorder (Mirror) : ";inorder(root);
    return 0;
}
