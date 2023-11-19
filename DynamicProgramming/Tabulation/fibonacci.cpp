#include <iostream>
#include <vector>

/*
    Find the n-th number of the fibonacci sequence.

    O(n) time
    O(n) space
 */

using namespace std;

class Solution{
public:
    int fib(int n){
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
};