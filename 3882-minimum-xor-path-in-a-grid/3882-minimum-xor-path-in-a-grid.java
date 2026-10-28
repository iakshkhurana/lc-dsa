class Solution {
        public int minCost(int[][] grid) {
            int m = grid.length;
            int n = grid[0].length;
            int MAX = 1024;
            boolean[][] dp = new boolean[n][MAX];

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    boolean[] cur = new boolean[MAX];
                    int val = grid[i][j];

                    if (i == 0 && j == 0) {
                        cur[val] = true;
                    } else {
                        if (i > 0) {
                            boolean[] top = dp[j];
                            for (int x = 0; x < MAX; x++) {
                                if (top[x]) cur[x ^ val] = true;
                            }
                        }
                        if (j > 0) {
                            boolean[] left = dp[j - 1];
                            for (int x = 0; x < MAX; x++) {
                                if (left[x]) cur[x ^ val] = true;
                            }
                        }
                    }

                    dp[j] = cur;
                }
            }

            for (int x = 0; x < MAX; x++) {
                if (dp[n - 1][x]) return x;
            }

            return 0;
        }
        }
