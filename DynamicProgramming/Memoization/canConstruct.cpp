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
 * O(n*m^2) time
 * O(m^2) space
 */

using namespace std;

class Solution{
public:
    unordered_map<string, bool> memo;
    bool canConstruct(string target, vector<string> wordBank){
        if(memo.count(target)){
            return memo[target];
        }
        if(target == ""){
            return true;
        }

        for(auto word: wordBank){
            if(target.find(word) == 0){
                string suff = target.substr(word.length());
                memo[target] = canConstruct(suff, wordBank);
                if(memo[target]){
                    return true;
                }
            }
        }

        memo[target] = false;
        return false;
    }
};
