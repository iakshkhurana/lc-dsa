class Solution {
public:
    // logic is ki minimum path sum ho
    // f(i,j)=g[i][j] + min(f(i-1,j),f(i,j-1))
    int f(int i,int j,vector<vector<int>>& g, vector<vector<int>>& dp){
        if(!i && !j)    return g[0][0];
        if(i<0 || j<0)  return 1e9;
        if(dp[i][j]!=-1)    return dp[i][j];
        int up=f(i-1,j,g,dp), left=f(i,j-1,g,dp);
        return dp[i][j]=g[i][j]+min(up,left);
    }
    int minPathSum(vector<vector<int>>& g) {
        int m=g.size(),n=g[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,g,dp);
    }
};