#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

/*
 * We are given n different types of stickers.
 * Each sticker has a lowercase English word on it.
 *
 * You would like to spell out the given string target
 * by cutting individual letters from your collection
 * of stickers and rearranging them. You can use each
 * sticker more than once if you want, and you have
 * infinite quantities of each sticker.
 *
 * Return the minimum number of stickers that you need
 * to spell out target. If the task is impossible, return -1.
 *
 * m = target.length()
 * n = stickers.length()
 *
 * O() time
 * O() space
 */

//using namespace std;

//class Solution {
//public:
//    int minStickers(vector<string> &stickers, string target) {
//        int m = stickers.size();
//        vector<vector<int>> mp(m, vector<int>(26, 0));
//        unordered_map<string, int> dp;
//        // count characters a-z for each sticker
//        for (int i = 0; i < m; i++) {
//            for (char c: stickers[i]) {
//                mp[i][c - 'a']++;
//            }
//        }
//        dp[""] = 0;
//        return helper(dp, mp, target);
//    }
//
//private:
//    int helper(unordered_map<string, int> &dp, vector<vector<int>> &mp, string target) {
//        if (dp.count(target)) {
//            return dp[target];
//        }
//
//        int ans = INT_MAX, n = mp.size();
//
//        vector<int> tar(26, 0);
//
//        for (char c: target) {
//            tar[c - 'a']++;
//        }
//        // try every sticker
//        for (int i = 0; i < n; i++) {
//            // optimization
//            if (mp[i][target[0] - 'a'] == 0) {
//                continue;
//            }
//            string s;
//            // apply a sticker on every character a-z
//            for (int j = 0; j < 26; j++) {
//                if (tar[j] - mp[i][j] > 0) {
//                    s += string(tar[j] - mp[i][j], 'a' + j);
//                }
//            }
//            int tmp = helper(dp, mp, s);
//            if (tmp != -1) {
//                ans = min(ans, 1 + tmp);
//            }
//        }
//
//        dp[target] = ans == INT_MAX ? -1 : ans;
//        return dp[target];
//    }
//};