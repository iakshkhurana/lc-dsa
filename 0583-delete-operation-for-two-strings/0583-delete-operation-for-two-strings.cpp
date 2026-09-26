class Solution {
public:
    int minDistance(string a, string b) {
        int n = a.size(), m = b.size();
        vector<vector<int>> lcs(n + 1, vector<int>(m + 1, 0));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                lcs[i][j] = (a[i-1] == b[j-1]) ? lcs[i-1][j-1] + 1
                                               : max(lcs[i-1][j], lcs[i][j-1]);
        return n + m - 2 * lcs[n][m];
    }
};