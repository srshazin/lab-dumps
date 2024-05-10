#include "binaryTree.h";

bool hasPathSum(Node* root, int sum) {
    if (root == nullptr) {
        return false;
    } int newSum = sum - root->data;

    if (root->left == nullptr && root->right == nullptr) {
        return newSum == 0;
    }

    return hasPathSum(root->left, newSum) || hasPathSum(root->right, newSum);
}

int main(){
    Node* root = nullptr;
    cout<<"How many Node you wanna insert ? ";
    int n, a; cin>>n;
    while(n--){
        cin>>a;
        root = insert(root, a);
    }

    cout<<"Enter the target sum: "; cin>>a;
    if (hasPathSum(root, a)) {
        cout << "The binary tree has a root-to-leaf path with sum " << a <<endl;
    } else {
        cout << "No root-to-leaf path with sum " << a << " found in the binary tree" <<endl;
    }
    return 0;
}
