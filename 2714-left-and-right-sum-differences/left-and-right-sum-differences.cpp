class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total =0;
        for(int i=0; i<nums.size();i++){
            total += nums[i];
        }
        int left =0;

        vector<int> result(nums.size());
            for(int i=0; i<nums.size();i++){
                int right = total - left - nums[i];
                result[i] = abs(left - right);
                left += nums[i];
            }
        
        return result;
    }
};