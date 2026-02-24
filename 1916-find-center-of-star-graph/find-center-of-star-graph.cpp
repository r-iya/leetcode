class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> frq;
        for(int i=0; i<edges.size();i++){
            int u = edges[i][0], v= edges[i][1];
            frq[u]++, frq[v]++;
        }
        int ans =0;
        for(auto &i: frq) if(i.second == edges.size()) ans = i.first;
        return ans;
    }
};