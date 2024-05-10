#include "binaryTree.h";

int main(){
    Node* root = nullptr;
    cout<<"How many Node you wanna insert ? ";
    int n, a; cin>>n;
    while(n--){
        cin>>a;
        root = insert(root, a);
    }

    cout<<"Inorder : ";inorder(root);
    return 0;
}
