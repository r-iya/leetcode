class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_s = 0;
        for(int number : nums){
            xor_s ^= number;
        }
        return xor_s;
    }
};