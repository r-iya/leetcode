class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return {};
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;   
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i = 0; i < n; i++){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);   
                if(curr->left != NULL)
                    q.push(curr->left);
                if(curr->right != NULL)
                    q.push(curr->right);
            }   
            if(level % 2 == 1)
                reverse(temp.begin(), temp.end());
            
            ans.push_back(temp);
            level++;
        }
        return ans;
    }
};
