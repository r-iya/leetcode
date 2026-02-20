class Solution {
public:
    void dfs(int node, vector<vector<int>>&adj, vector<int>&vis){
        vis[node]++;
        for(int i=0; i<adj[node].size();i++){
            int neigh = adj[node][i];
            if(vis[neigh]==0) dfs(neigh,adj,vis);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(int i=0; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(n);
        dfs(source, adj, vis);
        if(vis[destination]>0) return true;
        return false;
    }
    // void dfs(int node, vector<vector<int>>&adj, vector<vector<int>>&vis){
    //     vis[node]++;
    //     for(int i=0; i<adj[node].size();i++){
    //         int neigh = adj[node][i];
    //         if(vis[neigh]==0) dfs(neigh,adj,vis);
    //     }
    // }
};