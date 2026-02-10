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
    void preOrder(TreeNode* node, int curr, int &ans){
        if(node == NULL) return;
        curr = 10*curr + (node->val);
        if(node->left == NULL && node->right == NULL) ans = ans+curr;
        preOrder(node->left,curr,ans);
        preOrder(node->right,curr,ans);

    }
    int sumNumbers(TreeNode* root) {
        int ans = 0, curr = 0;
        preOrder(root,curr,ans);
        return ans;
    }
};