class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(100, vector<int>(100,-1));
    int solve(int i, int j){
        if(i<0 || j<0) return 0;
        if(i==0 || j==0) return dp[i] [j] = 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i] [j] = solve(i-1, j) + solve(i, j-1);
    }
    int uniquePaths(int m, int n) {
        return solve(m-1, n-1);
    }
};