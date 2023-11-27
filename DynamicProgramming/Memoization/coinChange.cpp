#include <iostream>
#include <vector>
#include <unordered_map>

/*
    You are given an integer array coins representing
    coins of different denominations and an integer
    amount representing a total amount of money.

    Return the fewest number of coins that you need
    to make up that amount. If that amount of money
    cannot be made up by any combination of the coins,
    return -1.

    You may assume that you have an infinite number
    of each kind of coin.

    All numbers from the array are positive.

    m = amount
    n = coins.length()

    O(m*n) time
    O(m) space
 */

using namespace std;

class Solution {
public:
    unordered_map<int, int> memo;

    int coinChange(vector<int> &coins, int amount) {
        if (memo.count(amount)) {
            return memo[amount];
        }
        if (amount < 0) {
            return -1;
        }
        if (amount == 0) {
            return 0;
        }

        int min_val = INT_MAX;
        for (auto coin: coins) {
            int diff = amount - coin;
            int res = coinChange(coins, diff);
            if (res >= 0 && res < min_val) {
                min_val = 1 + res;
            }
        }
        memo[amount] = min_val == INT_MAX ? -1 : min_val;
        return memo[amount];
    }
};
