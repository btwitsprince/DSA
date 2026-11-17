class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int n = grid.size();
    int m = grid[0].size();
    bool check = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (i + 1 < n && grid[i][j] != grid[i + 1][j]) {
            check = false; 
            }
            if (j + 1 < m && grid[i][j] == grid[i][j + 1]) {
                check = false;
            }
        }
    }
    return check;
    }
};