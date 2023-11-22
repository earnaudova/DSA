#include <iostream>
#include "projectHeader.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    int m = 8;
    int n = 8;
    vector<int> nums = {2, 3, 5};
    vector<int> res;
    string str = "purple";
    vector<string> wordBank = {"purp", "p", "ur", "le", "purpl"};

    Solution* s = new Solution();

    res = s->bestSum(n, nums);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

//    cout << res << endl;

    return 0;
}
