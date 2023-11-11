#include <iostream>
#include "unordered_map"

/*
    Is it possible to generate the target using
    numbers from the array nums?

    All numbers from the array are positive.

    O(n) time
    O(n) space
 */

using namespace std;

class Solution {
public:
    unordered_map<int, int> memo;
    bool canSum(int target, vector<int> &nums){
        if(memo.count(target)){
            return memo[target];
        }

        if(target == 0){
            return true;
        }

        if(target < 0){
            return false;
        }

        for(auto n: nums){
            int diff = target - n;
            if(canSum(diff, nums)){
                memo[target] = true;
                return true;
            }
        }

        memo[target] = false;
        return false;
    }
};