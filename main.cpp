#include <iostream>
#include "projectHeader.h"

using namespace std;

int main() {
    int m = 3;
    int n = 8;
    vector<int> nums = {2, 3, 5};
    vector<int> res;

    Solution* s = new Solution();

    res = s->howSum(n, nums);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

//    cout << res << endl;

    return 0;
}
