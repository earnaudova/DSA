#include <iostream>
#include <vector>

/*
    Given grid, return # of unique paths from top-left to bottom-right
    Ex. m = 3, n = 2 -> 3 unique paths (R->D->D, D->D->R, D->R->D)

    O(m*n) time
    O(m*n) space
 */

using namespace std;

class Solution{
public:
    int gridTraveler(int m, int n){
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        dp[1][1] = 1;

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                dp[i][j] += dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m][n];
    }
};
