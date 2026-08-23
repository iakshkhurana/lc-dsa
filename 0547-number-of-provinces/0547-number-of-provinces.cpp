class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis) {
        vis[node] = 1;
        for(int j = 0; j < adj.size(); j++) {
            if(adj[node][j] == 1 && !vis[j]) {
                dfs(j, adj, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> vis(V, 0);
        int cnt = 0;
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(i, isConnected, vis);
            }
        }
        return cnt;
    }
};