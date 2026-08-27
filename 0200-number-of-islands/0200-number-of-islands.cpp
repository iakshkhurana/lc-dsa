class Solution {
private:
    void bfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int n = grid.size(), m = grid[0].size();
        vis[r][c] = 1;
        queue<pair<int,int>> q;
        q.push({r, c});
        int dr[4] = {0, -1, 0, 1};
        int dc[4] = {-1, 0, 1, 0};
        while(!q.empty()){
            auto [rc, cc] = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){
                int nr = rc + dr[i];
                int nc = cc + dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m
                   && !vis[nr][nc] && grid[nr][nc] == '1'){
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        for(int r = 0; r < n; r++){
            for(int c = 0; c < m; c++){
                if(!vis[r][c] && grid[r][c] == '1'){
                    cnt++;
                    bfs(r, c, grid, vis);
                }
            }
        }
        return cnt;
    }
};