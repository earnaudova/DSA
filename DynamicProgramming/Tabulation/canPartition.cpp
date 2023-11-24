#include <iostream>
#include <vector>

/*
    Given an integer array nums, return true
    if you can partition the array into two
    subsets such that the sum of the elements
    in both subsets is equal or false otherwise.

    Example 1:

    Input: nums = [1,5,11,5]
    Output: true
    Explanation: The array can be partitioned as [1, 5, 5] and [11].

    Example 2:

    Input: nums = [1,2,3,5]
    Output: false
    Explanation: The array cannot be partitioned into equal sum subsets.

    All numbers from the array are positive.

    m = target
    n = nums.length()

    O(m*n) time
    O(m) space
 */

using namespace std;

class Solution {
public:
    bool canPartition(vector<int> &nums) {
        int totalSum = 0;
        for (auto n: nums) {
            totalSum += n;
        }

        if (totalSum % 2 == 1) {
            return false;
        }
        totalSum /= 2;

        vector<bool> dp(totalSum + 1, false);
        dp[0] = true;

        for (int n: nums) {
            for (int i = totalSum; i >= n; i--) {
                if (dp[i - n]) {
                    dp[i] = true;
                }
            }
        }

        return dp[totalSum];
    }
};


