#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>> &grid, vector<vector<bool>> visited, int r, int c){
        if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || visited[r][c] || grid[r][c] == 'W'){
            return 0;
        }

        visited[r][c] = true;

        dfs(grid, visited, r-1, c);
        dfs(grid, visited, r+1, c);
        dfs(grid, visited, r, c-1);
        dfs(grid, visited, r, c+1);

        return true;
    }

    int islandCount(vector<vector<char>> &grid){
        vector<vector<bool>> visited(false, vector<bool>(false));
        int count = 0;

        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(!visited[r][c] && grid[r][c] == 'L'){
                    count += dfs(grid, visited, r, c);
                }
            }
        }

        return count;
    }
};