#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

/*
    Function should return number of ways that the 'target'
    can be constructed by concatenating elements of the
    'wordBank' array.

    Elements in wordBank may be reused.

    m = target.length()
    n = wordBank.length()

    O(m*n) time
    O(m) space
 */

using namespace std;

class Solution{
public:
    int countConstruct(string target, vector<string> &wordBank){
        vector<int> dp(target.length()+1, 0);
        dp[0] = 1;

        for(int i = 0; i <= target.length(); i++){
            if(dp[i] != 0){
                for(auto word:wordBank){
                    string str = target.substr(i, word.length());
                    if(str == word){
                        dp[i+word.length()] += dp[i];
                    }
                }
            }
        }

        return dp[target.length()];
    }
};