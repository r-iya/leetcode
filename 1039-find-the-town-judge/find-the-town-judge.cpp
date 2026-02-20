class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int, int> inDegree;
        map<int, int> outDegree;

        for(auto &t: trust){
            outDegree[t[0]]++;
            inDegree[t[1]]++;
        }
        for(int i=1; i<=n;i++){
            if(inDegree[i] == n-1 && outDegree[i] == 0) return i;
            }
            return -1;

        }
        
    
};