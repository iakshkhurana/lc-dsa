class Solution {
public:
    int f(int i, int canBuy, int k, vector<int>& p, vector<vector<vector<int>>>& dp) {
        if (i == p.size() || k == 0) return 0;
        if (dp[i][canBuy][k] != -1) return dp[i][canBuy][k];
        int skip = f(i+1, canBuy, k, p, dp);
        int act  = canBuy ? -p[i] + f(i+1, 0, k, p, dp)
                          :  p[i] + f(i+1, 1, k-1, p, dp);
        return dp[i][canBuy][k] = max(act, skip);
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k+1, -1)));
        return f(0, 1, k, prices, dp);
    }
};