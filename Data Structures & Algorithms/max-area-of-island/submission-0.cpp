class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int area = 0;
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for(int r = 0; r < rows; ++r) {
            for(int c = 0; c < cols; ++c) {
                if(grid[r][c] == 1 && !visited[r][c]) {
                    int island = dfs(grid, r, c, visited);
                    area = max(island, area);
                }
            }
        }
        return area;
    }

private:
    int dfs(vector<vector<int>>& grid, int r, int c, vector<vector<bool>>& visited) {
        int rows = grid.size();
        int cols = grid[0].size();

        if( r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0 || visited[r][c])
            return 0;
        visited[r][c] = true;
        return 1
        + dfs(grid, r+1, c, visited)
        + dfs(grid, r-1, c, visited)
        + dfs(grid, r, c+1, visited)
        + dfs(grid, r, c-1, visited);
    }
};

