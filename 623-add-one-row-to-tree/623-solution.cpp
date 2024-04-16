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
    void dfs(TreeNode* curr, int depth, int val, int currdepth) {
        if(!curr) return;
        if(currdepth<depth-1) {
            dfs(curr->left, depth, val, currdepth+1);
            dfs(curr->right, depth, val, currdepth+1);
        }
        else {
            TreeNode *ptr = curr->left;
            curr->left = new TreeNode(val);
            curr->left->left = ptr;
            ptr=curr->right;
            curr->right = new TreeNode(val);
            curr->right->right=ptr;
        }
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1) {
            TreeNode* ptr = new TreeNode(val);
            ptr->left = root;
            root=ptr;
        }
        else {
            dfs(root,depth,val,1);
        }
        return root;
    }
};
