class Solution {
public:
    int memo(int i, int j, vector<vector<int>>& g, vector<vector<int>>& dp){
        if(i<0 || j<0)    return 0;
        if(g[i][j]==1)  return 0;
        if(i==0 && j==0)    return 1;
        if(dp[i][j]!= -1)   return dp[i][j];
        return dp[i][j]=memo(i-1,j,g,dp)+memo(i,j-1,g,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m=g.size(),n=g[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return memo(m-1,n-1,g,dp);
    }
};