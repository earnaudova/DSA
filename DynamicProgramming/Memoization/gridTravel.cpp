#include <iostream>
#include "unordered_map"

/*
    Given grid, return # of unique paths from top-left to bottom-right
    Ex. m = 3, n = 2 -> 3 unique paths (R->D->D, D->D->R, D->R->D)

    O(m*n) time
    O(m*n) space
 */

using namespace std;

class Solution {
public:
    unordered_map<string, int> memo;
    int gridTravel(int m, int n){
        string key = to_string(m) + ',' + to_string(n);
        if(memo.count(key)){
            return memo[key];
        }
        if(m == 1 && n == 1){
            return 1;
        }
        if(m == 0 || n == 0){
            return 0;
        }

        memo[key] = gridTravel(m-1, n) + gridTravel(m, n-1);
        return memo[key];
    }
};