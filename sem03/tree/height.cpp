#include "binaryTree.h";

int calculateHeight(Node* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);

        return max(leftHeight, rightHeight) + 1;
    }

int main(){
    Node* root = nullptr;
    cout<<"How many Node you wanna insert ? ";
    int n, a; cin>>n;
    while(n--){
        cin>>a;
        root = insert(root, a);
    }

    cout<<"Height : "<<calculateHeight(root);
    return 0;
}
