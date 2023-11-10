#include <iostream>
#include "unordered_map"

/*
    Find the n-th number of the fibonacci sequence.

    O(n) time
    O(n) space
 */

using namespace std;

class Solution {
public:
    unordered_map<int, int> memo;
    int fib(int n){
        if(memo.count(n)){
            return memo[n];
        }
        if(n <= 2){
            return 1;
        }
        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }
};