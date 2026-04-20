class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int count= 0;
        for(int i=0; i<n; i++){
            if(nums[i]%2 == 0){
                count++;
            }
        }

        vector<int> result(n);
        for(int i=0; i<count; i++){
            result[i] = 0;
        }
        for(int i=count; i<n;i++){
            result[i] = 1;
        }
        return result;
    }
};