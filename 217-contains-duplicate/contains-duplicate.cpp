class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mpp;

        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]>0) return true;
            mpp[nums[i]]++;
        }
        return false;
        
    }
};