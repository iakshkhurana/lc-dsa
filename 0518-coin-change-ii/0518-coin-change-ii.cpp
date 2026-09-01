class Solution {
private:
    int f(int i, int t, vector<int>& c, vector<vector<int>>& dp){
        if(t==0){
            // target 0
            return 1;
        }
        if(i==0){
            return (t%c[0]==0) ? 1 : 0;
        }
        if(dp[i][t]!=-1){
            return dp[i][t];
        }
        int skip=f(i-1,t,c,dp);
        int take=(c[i]<=t) ? f(i,t-c[i],c,dp): 0;
        return dp[i][t]=skip+take;
    }
public:
    int change(int amount, vector<int>& c) {
        vector<vector<int>>dp(c.size(),vector<int>(amount+1,-1));
        return f(c.size()-1,amount,c,dp);    
    }
};