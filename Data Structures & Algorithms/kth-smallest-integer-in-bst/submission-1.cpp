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
    void dfs(TreeNode* root, int& k, int& ans){
        if(!root) return;

        //pq.push(root->val);
        //if(pq.size()>k) pq.pop();

        dfs(root->left, k, ans);
        k--;
        if(k==0) ans=root->val;
        dfs(root->right, k, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;

        int ans =0;
        dfs(root, k, ans);
        return ans;
    }
};
