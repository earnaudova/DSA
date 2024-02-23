#include <iostream>
#include <string>
#include <math.h>
#include <vector>

/*
 * Find the minimum odd number in an array
 * [5, 3, 4, 2]
 * [6, 2]
 * [6, 2, INT_MAX]
 */

using namespace std;

int minOddNum(vector<int> &nums){
    if(nums.size() == 0){
        return 0;
    }

    int minNum = INT_MAX;
    bool flag = false;

    for(int n: nums){
        if(n % 2 != 0){
            flag = true;
            minNum = min(minNum, n);
        }
    }

    if(!flag){
        minNum = 0;
    }
    return minNum;
}