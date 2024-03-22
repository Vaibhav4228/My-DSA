


#include <iostream>
#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n));
    
    dp[0][0] = grid[0][0];
    
    // Initialize first row
    for (int j = 1; j < n; ++j)
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    
    // Initialize first column
    for (int i = 1; i < m; ++i)
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    
    // Fill the dp array
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }
    
    return dp[m - 1][n - 1];
}

int main() {
    vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    cout << "Minimum Path Sum: " << minPathSum(grid) << endl;
    return 0;
}


// We create a dp 2D array to store the minimum path sum from the top left to each cell.
// We initialize dp[0][0] as the first element of the grid.
// We initialize the first row and the first column of dp as the cumulative sum of elements in the corresponding row or column of the grid.
// We iterate through the grid starting from (1, 1) and update dp[i][j] as the minimum of dp[i - 1][j] and dp[i][j - 1] plus the current cell value.
// The minimum path sum is dp[m - 1][n - 1], where m and n are the dimensions of the grid.