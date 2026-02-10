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
// class Solution {
// public:
//     int ans =0, maxDep =0;
//     void sum(TreeNode* node, int currDep){
//         if(node == NULL) return;
//         if(currDep == maxDep) ans = ans+(node->val);
//         if(currDep>maxDep){
//             maxDep = currDep;
//             ans = node->val;
//         }
//         sum(node->left, currDep +1);
//         sum(node->right, currDep +1);
//     }
//     int countHighestScoreNodes(vector<int>& parents) {
//         sum(root, 0);
//         return ans;
//     }
    
// };
class Solution {
public:
    int ans = 0;
    int maxDep = 0;

    void dfs(TreeNode* node, int currDep) {
        if(node == NULL) return;
        if(node->left == NULL && node->right == NULL) {

            if(currDep > maxDep) {
                maxDep = currDep;
                ans = node->val; 
            }
            else if(currDep == maxDep) {
                ans += node->val;
            }
        }

        dfs(node->left, currDep + 1);
        dfs(node->right, currDep + 1);
    }

    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};
