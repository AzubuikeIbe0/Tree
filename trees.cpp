#include "trees.h"
#include <iostream>

TreeNode::TreeNode(int val) : data(val), right(nullptr), left(nullptr) {
    // Assuming you want to initialize the left and right children to nullptr
    // If you have specific values, you should create new nodes and assign them here
    left = nullptr;
    right = nullptr;
}



void TreeNode::PreOrderTransversal(TreeNode* root) {
    if (root == nullptr) return;

    std::cout << root->data << " ";

    PreOrderTransversal(root->left);
    PreOrderTransversal(root->right);
}

void TreeNode::InOrderTransversal(TreeNode* root) {
    if (root == nullptr) return;

    InOrderTransversal(root->left);
    std::cout << root->data << " ";
    InOrderTransversal(root->right);
}

void TreeNode::PostOrderTransversal(TreeNode* root) {
    if (root == nullptr) return;

    PostOrderTransversal(root->left);
    PostOrderTransversal(root->right);
    std::cout << root->data << " ";
}

void TreeNode::DeleteTransversal(TreeNode* root) {
    if (root == nullptr) return;

    DeleteTransversal(root->left);
    DeleteTransversal(root->right);

    delete(root);
}
