#include <iostream>
#include <unordered_map>
#include <vector>

/*
    Return an array containing any combination
    of elements that add up to exactly the target.
    If there is no combination that adds up to
    the target, then return an empty array.

    O(n*m^2) time
    O(m^2) space
 */

using namespace std;

class Solution{
public:
    unordered_map<int, vector<int>> memo;
    vector<int> path;
    vector<int> howSum(int target, vector<int> &nums){
        if(memo.count(target)) {
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
            vector<int> curr = howSum(diff, nums);
            if(!curr.empty()){
                memo[target] = curr;
                return memo[target];
            }
            path.pop_back();
        }

        memo[target] = {};
        return {};
    }
};