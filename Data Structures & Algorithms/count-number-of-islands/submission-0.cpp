class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<bool>> visited(
            rows, vector<bool>(cols, false)
        );

        int count = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == '1' && !visited[r][c]) {
                    dfs(grid, r, c, visited);
                    count++;
                }
            }
        }

        return count;
    }

private:
    void dfs(
        vector<vector<char>>& grid,
        int r,
        int c,
        vector<vector<bool>>& visited
    ) {
        int rows = grid.size();
        int cols = grid[0].size();

        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            return;
        }

        if (visited[r][c] || grid[r][c] == '0') {
            return;
        }

        visited[r][c] = true;

        dfs(grid, r + 1, c, visited);
        dfs(grid, r - 1, c, visited);
        dfs(grid, r, c + 1, visited);
        dfs(grid, r, c - 1, visited);
    }
};