#include <iostream>
#include <vector>
#include <map>


/*
    Return an array containing any combination
    of elements that add up to exactly the target.
    If there is no combination that adds up to
    the target, then return an empty array.

    O() time
    O() space
 */

using namespace std;

class Solution {
public:
    vector<int> howSum(int target, vector<int> nums) {
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
                        dp[i + num] = curr;
                        curr.pop_back();
                    }
                }
            }
        }

        return dp[target];
    }
};