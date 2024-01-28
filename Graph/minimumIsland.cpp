#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int dfs(vector<vector<char>> &grid, vector<vector<bool>> visited, int r, int c){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || visited[r][c] || grid[r][c] == 'W'){
            return 0;
        }

        visited[r][c] = true;

        int size = 1;
        size += dfs(grid, visited, r-1, c);
        size += dfs(grid, visited, r+1, c);
        size += dfs(grid, visited, r, c-1);
        size += dfs(grid, visited, r, c+1);

        return size;
    }

    int minimumIsland(vector<vector<char>> &grid){
        vector<vector<bool>> visited(false, vector<bool>(false));
        int count = 0;
        int min_count = INT_MAX;

        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(!visited[r][c] && grid[r][c] == 'L'){
                    count = dfs(grid, visited, r, c);
                    min_count = min(min_count, count);
                }
            }
        }

        return min_count;
    }
};
