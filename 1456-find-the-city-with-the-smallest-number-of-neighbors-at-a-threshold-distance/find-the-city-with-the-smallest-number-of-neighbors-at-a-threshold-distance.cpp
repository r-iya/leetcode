class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        for(int i = 0; i < n; i++){
            dist[i][i] = 0;
        }
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            dist[u][v] = w;
            dist[v][u] = w;
        }
        for(int inter = 0; inter < n; inter++){
            for(int src = 0; src < n; src++){
                for(int dest = 0; dest < n; dest++){
                    
                    if(dist[src][inter] == INT_MAX || 
                       dist[inter][dest] == INT_MAX)
                        continue;
                    
                    dist[src][dest] = min(dist[src][dest],
                                          dist[src][inter] + dist[inter][dest]);
                }
            }
        }
        
        int minCount = INT_MAX;
        int ans = -1;
        
        for(int i = 0; i < n; i++){
            int count = 0;
            
            for(int j = 0; j < n; j++){
                if(dist[i][j] <= distanceThreshold)
                    count++;
            }
            
            if(count <= minCount){   // important for tie
                minCount = count;
                ans = i;
            }
        }
        
        return ans;
    }
};