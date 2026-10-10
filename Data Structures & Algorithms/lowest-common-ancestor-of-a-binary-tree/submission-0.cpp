/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root || root==p || root ==q){
            if(root == p || root==q) return root;
            return nullptr;
        }

        TreeNode* lft = lca(root->left, p, q);
        TreeNode* rgt = lca(root->right, p, q);

        if(!lft) return rgt;
        if(!rgt) return lft;
        return root;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root, p, q);
    }
};