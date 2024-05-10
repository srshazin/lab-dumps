#include "binaryTree.h";
#include<queue>

void levelOrder(Node* root) {
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";

            if (current->left)  q.push(current->left);
            if (current->right) q.push(current->right);
        }
        cout << endl;
    }
}

int main(){
    Node* root = nullptr;
    cout<<"How many Node you wanna insert ? ";
    int n, a; cin>>n;
    while(n--){
        cin>>a;
        root = insert(root, a);
    }

    cout<<"Inorder : ";inorder(root);
    cout<<"\nlevelOrder : ";levelOrder(root);
    return 0;
}
