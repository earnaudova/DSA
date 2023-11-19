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

//class Solution{
//public:
//    unordered_map<string, vector<string>> memo; //TBD
//    vector<string> path;
//
//    vector<vector<string>> allConstruct(string target, vector<string> &wordBank){
//        vector<vector<string>> res;
//        helper(target, wordBank, res);
//        return res;
//    }
//
//    void helper(string target, vector<string> &wordBank, vector<vector<string>> &res){
//        if(target == ""){
//            res.push_back(path);
//            return;
//        }
//
//        for(auto word: wordBank){
//            if(target.find(word) == 0) {
//                string suff = target.substr(word.length());
//                path.push_back(word);
//                helper(suff, wordBank, res);
//                path.pop_back();
//            }
//        }
//
//        return;
//    }
//};

class Solution{
public:
    unordered_map<string, vector<vector<string>>> memo; //TBD
    vector<string> path;
    vector<vector<string>> res = {};

    vector<vector<string>> allConstruct(string target, vector<string> &wordBank){
        if(target == ""){
            return {};
        }

        for(auto word: wordBank){
            if(target.find(word) == 0){
                string suff = target.substr(word.length());
                path.push_back(word);
                vector<vector<string>> curr = allConstruct(suff, wordBank);
                if(curr.empty()){
                    res.push_back(path);
                }
                path.pop_back();
            }
        }

        return res;
    }
};