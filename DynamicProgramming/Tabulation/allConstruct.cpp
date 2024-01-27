#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

/*
 * Return a 2D array containing all of the ways that
 * the 'target' can be constructed by concatenating
 * elements of the 'wordBank' array. Each element of
 * the 2D array should represent one combination that
 * constructs the 'target'.
 *
 * Elements of 'wordBank' may be reused.
 *
 * m = target.length()
 * n = wordBank.length()
 *
 * O() time
 * O() space
 */

using namespace std;

class Solution {
public:
    vector<vector<string>> allConstruct(string target, vector<string> wordBank) {
        vector<vector<vector<string>>> dp(target.length() + 1);

        for (int i = 0; i <= target.length(); i++) {
            for (auto word: wordBank) {
                if (target.substr(i, word.length()) == word) {
                    vector<vector<string>> combination = dp[i];
                    combination.push_back({word});
                    for (auto el: combination) {
                        dp[i + word.length()].push_back(el);
                    }
                }
            }
        }

        return dp[target.length()];
    }
};