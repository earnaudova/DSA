#include <iostream>
#include <unordered_map>
#include <vector>

/*
 * Return an array containing the shortest combination
 * of numbers that add up to exactly the target.
 *
 * m = target
 * n = num.length()
 *
 * O(n*m^2) time
 * O(m^2) space
 */

using namespace std;

class Solution{
public:
    unordered_map<int, vector<int>> memo;
    vector<int> path;
    vector<int>  res = {};
    vector<int> bestSum(int target, vector<int> &nums){
        if(memo.count(target)){
            return memo[target];
        }

        if(target == 0){
            return path;
        }

        if(target < 0){
            return {};
        }

        for(auto n: nums){
            int diff = target - n;
            path.push_back(n);
            vector<int> curr = bestSum(diff, nums);
            if(!curr.empty()){
                memo[target] = curr;
                if(curr.size() < res.size() || res.empty()){
                    res = curr;
                }
            }
            path.pop_back();
        }

        memo[target] = res;
        return res;
    }
};
