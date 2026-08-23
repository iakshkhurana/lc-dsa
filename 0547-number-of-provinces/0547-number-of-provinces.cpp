class Solution {
public:
    vector<int> vis;
    vector<vector<int>> g;
    void solve(int node) {
        vis[node] = 1;
        for (int j = 0; j < g.size(); j++) {
            if (g[node][j] == 1 && !vis[j]) {
                solve(j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        g = isConnected;
        vis.assign(n, 0);
        int provinces = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                provinces++;
                solve(i);
            }
        }
        return provinces;
    }
};