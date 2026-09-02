class Solution {
public:
    int f(int i, int canBuy, vector<int>& p, vector<vector<int>>& dp) {
        if (i == p.size()) return 0;
        if (dp[i][canBuy] != -1) return dp[i][canBuy];
        int skip = f(i+1, canBuy, p, dp);
        int act  = canBuy ? -p[i] + f(i+1, 0, p, dp)     // buy
                          :  p[i] + f(i+1, 1, p, dp);    // sell
        return dp[i][canBuy] = max(act, skip);
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        return f(0, 1, prices, dp);
    }
};