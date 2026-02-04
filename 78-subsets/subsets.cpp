class Solution {
public:
    
    void rec(vector<int>& nums, int i, vector<int>& curr, vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        rec(nums, i + 1, curr, ans);
        curr.pop_back();
        rec(nums, i + 1, curr, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

        rec(nums, 0, curr, ans);
        return ans;
    }
};
