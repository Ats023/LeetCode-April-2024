/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool postorder(TreeNode* node) {
        if(node->left==NULL && node->right==NULL) return node->val;
        int x = postorder(node->left);
        int y = postorder(node->right);
        if(node->val==2) return x|y;
        return x&y;
    }

    bool evaluateTree(TreeNode* root) {
        return postorder(root);
    }
};
