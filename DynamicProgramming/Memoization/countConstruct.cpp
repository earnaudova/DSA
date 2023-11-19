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

    O() time
    O() space
 */

using namespace std;

class Solution{
public:
    unordered_map<string, int> memo;
    int total = 0;
    int countConstruct(string target, vector<string> &wordBank){
        if(memo.count(target)){
            return memo[target];
        }

        if(target == ""){
            return 1;
        }

        int total = 0;

        for(auto word: wordBank){
            if(target.find(word) == 0) {
                string suff = target.substr(word.length());
                total += countConstruct(suff, wordBank);
            }
        }

        memo[target] = total;
        return total;
    }
};
