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
    string ans;
    void dfs(TreeNode *node, string s) {
        if(!node) return;
        s=(char)('a'+node->val)+s;
        if(!node->left && !node->right) {
            if(ans.empty() || s<ans) ans=s;
        }
        dfs(node->left, s);
        dfs(node->right,s);

    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};
