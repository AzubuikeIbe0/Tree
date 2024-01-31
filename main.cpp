#include "trees.h"
#include <iostream>

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    std::cout << "PreOrder Traversal" << std::endl;
    root->PreOrderTransversal(root);
    std::cout << std::endl;

    std::cout << "Post Order Traversal" << std::endl;
    root->PostOrderTransversal(root);
    std::cout << std::endl;

    std::cout << "In Order Traversal" << std::endl;
    root->InOrderTransversal(root);
    std::cout << std::endl;

    std::cout << "Delete Traversal" << std::endl;
    root->DeleteTransversal(root);

    return 0;
}
