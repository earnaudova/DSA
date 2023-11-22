#include <iostream>
#include <map>
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
    vector<int> bestSum(int target, vector<int> nums){
        map<int, vector<int>> dp;
        dp[0] = {0};

        int j = 1;
        while (j <= target) {
            dp[j];
            j++;
        }

        for (int i = 0; i <= target; i++) {
            if(!dp[i].empty()){
                vector<int> curr;
                curr = dp[i];
                if(curr[0] == 0){
                    curr.pop_back();
                }
                for (auto num: nums) {
                    if (i + num <= target) {
                        curr.push_back(num);
                        if(dp[i+num].size() > curr.size() || dp[i+num].empty()){
                            dp[i + num] = curr;
                        }
                        curr.pop_back();
                    }
                }
            }
        }

        return dp[target];
    }
};
