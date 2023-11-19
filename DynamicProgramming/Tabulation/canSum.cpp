#include <iostream>
#include <vector>

/*
    Is it possible to generate the target using
    numbers from the array nums?

    All numbers from the array are positive.

    m = target
    n = nums.length()

    O(m*n) time
    O(m) space
 */

using namespace std;

class Solution{
public:
    bool canSum(int target, vector<int> nums){
        vector<bool> dp(target+1, false);
        dp[0] = true;

        for(int i = 0; i <= target; i++){
            for(int j = 0; j < nums.size(); j++){
                if(dp[i] && i+nums[j] <= target){
                    dp[i+nums[j]] = true;
                }
            }
        }

        return dp[target];
    }
};