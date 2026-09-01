class Solution {
public:
    // solve using dp
    // memoisation
    // 1<=n<=45
    int memo(int n, vector<int>& dp){
        if(n<0) return 0;
        if(n==0) return 1;
        // 1 ya 2 le skte ho so n-1 and n-2
        if(dp[n]!=-1)   return dp[n];
        int l = memo(n-1, dp);
        int r = memo(n-2,dp);
        return dp[n]=l+r;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1); // initialised all with -1
        return memo(n,dp);
    }
};