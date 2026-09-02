class Solution {
private:
    int f(int i, int prev, vector<int>& a, vector<vector<int>>& dp){
        if(i == a.size()) return 0;
        if(dp[i][prev+1] != -1) return dp[i][prev+1];
        int exclude = f(i+1, prev, a, dp);
        int include = 0;
        if(prev == -1 || a[i] > a[prev])
            include = 1 + f(i+1, i, a, dp);
        return dp[i][prev+1] = max(include, exclude);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return f(0, -1, nums, dp);
    }
};