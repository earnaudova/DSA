#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

/*
 * Return a boolean indicating whether the
 * 'target' can be constructed by concatenating
 * elements from the 'wordBank' array.
 *
 * Elements of 'wordBank' may be reused.
 *
 * m = target.length()
 * n = wordBank.length()
 *
 * O(m*n) time
 * O(m^2) space
 */

using namespace std;

class Solution {
public:
    bool canConstruct(string target, vector<string> &wordBank){
        int size = target.length();
        vector<bool> dp(size+1, false);
        dp[0] = true;

        for(int i = 0; i <= size; i++){
            if(dp[i]){
                for(auto word: wordBank){
                    if(target.substr(i, i + word.length()) == word && i + word.length()-1 <= size){
                        dp[i+word.length()] = true;
                    }
                }
            }
        }

        return dp[target.length()];
    }
};