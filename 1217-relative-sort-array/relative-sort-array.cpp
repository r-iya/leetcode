class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       unordered_map<int, int> freqMap;
        for (int x : arr1) {
            freqMap[x]++;
        }

        vector<int> res;

        for (int y : arr2) {
            while (freqMap[y]--) {
                res.push_back(y);
            }
            freqMap.erase(y);
        }

        vector<int> leftover;
        for (auto &p : freqMap) {
            while (p.second--) {
                leftover.push_back(p.first);
            }
        }

        sort(leftover.begin(), leftover.end());

        for (int z : leftover) {
            res.push_back(z);
        }

        return res;
    }
};