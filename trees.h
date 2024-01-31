#ifndef TREES_H
#define TREES_H

class TreeNode
{
private:
    int data;
    

public:
    TreeNode* right;
    TreeNode* left;
    // Constructor
    TreeNode(int val);

    // Member functions
    void PreOrderTransversal(TreeNode* root);
    void InOrderTransversal(TreeNode* root);
    void PostOrderTransversal(TreeNode* root);
    void DeleteTransversal(TreeNode* root);
};

#endif
