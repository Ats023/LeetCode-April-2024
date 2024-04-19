class Solution {
public:
    void dfs(auto &grid, int x, int y) {
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]=='0') return;
        grid[x][y] = '0';
        dfs(grid, x, y+1);
        dfs(grid, x, y-1);
        dfs(grid, x+1, y);
        dfs(grid, x-1, y);
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;
        int count = 0;
        for(int i=0; i<grid.size(); i++)
        for(int j=0; j<grid[0].size(); j++) {
            if(grid[i][j]=='1') {
                count++;
                dfs(grid,i,j);
            }
        }
        return count;
    }
};
