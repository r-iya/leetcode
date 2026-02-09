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
    bool trav(TreeNode* node, int sum, int target){
        if(node == NULL) return false;
        sum += node->val;
        if(node->left == NULL && node->right == NULL){
            return sum == target;
        }

        return trav(node->left, sum, target) ||
               trav(node->right, sum, target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return trav(root, 0, targetSum);
    }
};
