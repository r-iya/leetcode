class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0; j<n;j++){
                if(isConnected[i][j]==1) adj[i].push_back(j);
            }
        }
        vector<int>vis(n);
        int ans=0;

        for(int i=0;i<n;i++){
            if(vis[i] == 0){
                dfs(i, adj, vis);
                ans++;
            }
        }
        return ans;
    }
    void dfs(int node, vector<vector<int>>&adj, vector<int>&vis){
        vis[node]++;
        for(int i=0; i<adj[node].size(); i++){
            int neigh = adj[node][i];
            if(vis[neigh]==0) dfs(neigh, adj, vis);
        }
    }
};