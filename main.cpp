#include <iostream>
#include "projectHeader.h"

using namespace std;

int main() {
    int m = 3;
    int n = 7;
    vector<int> nums = {5, 3, 4, 7};
    int res = 0;

    Solution* s = new Solution();
    res = s->canSum(n, nums);

    cout << res << endl;

    return 0;
}
