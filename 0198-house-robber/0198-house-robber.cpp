class Solution {
public:
    int f(int i, vector<int>& a, vector<int>& dp){
        if(i<0) return 0;
        if(dp[i]!=-1)   return dp[i];
        int skip=f(i-1,a,dp);
        int rob=a[i]+f(i-2,a,dp);
        return dp[i]=max(skip,rob);
    }
    int rob(vector<int>& a) {
        int n=a.size();
        vector<int>dp(n,-1);
        return f(n-1,a,dp);
    }
};