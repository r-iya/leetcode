class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long val = 0;
        while(nums.size()>1){
            int f = nums.front();
            int l = nums.back();
            long long concatNum = stoi(to_string(f) + to_string(l));
            val += concatNum;

            nums.erase(nums.begin());
            nums.pop_back();
        }
        if(nums.size() == 1){
            val += nums[0];
            nums.pop_back();
        }
        return val;
    }
};