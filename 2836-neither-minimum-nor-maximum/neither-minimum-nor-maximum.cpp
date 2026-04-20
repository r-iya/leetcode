class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()< 3) return -1;

        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int x: nums){
            mn = min(mn, x);
            mx = max(mx, x);
        }

        for(int x : nums){
            if(x!= mn && x != mx){
                return x;
            }
        }
        return -1;
    }
};