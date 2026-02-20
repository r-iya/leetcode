class Solution {
public:
    void dfs(int node, vector<vector<int>> &rooms, vector<int> &vis){
        vis[node]++;
        for(int i=0; i<rooms[node].size(); i++){
            int neigh = rooms[node][i];
            if(vis[neigh]==0) dfs(neigh, rooms, vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n);
        dfs(0, rooms, vis);
        int count =0;
        for(int i=0; i<n;i++){
            if(vis[i]>0) count++;
        }
        if(count == n) return true;
        return false;
    }
};