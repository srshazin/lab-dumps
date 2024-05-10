#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root , int value){
    if(root == nullptr){
        return new Node(value);
    }

    if(root->data > value){
        root->left = insert(root->left, value);
    }else{
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
#endif
