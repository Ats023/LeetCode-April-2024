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
    int sumPaths(TreeNode *node, int cur) {
        if(!node) return 0;
        cur = cur*10+node->val;
        if(!node->left && !node->right) return cur;
        return sumPaths(node->left, cur) + sumPaths(node->right, cur);
    }
    int sumNumbers(TreeNode* root) {
        return sumPaths(root, 0);
    }
};
