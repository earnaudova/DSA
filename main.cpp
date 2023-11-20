#include <iostream>
#include "projectHeader.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    int m = 3;
    int n = 7;
    vector<int> nums = {5,3,4};
    vector<int> res;
    string str = "purple";
    vector<string> wordBank = {"purp", "p", "ur", "le", "purpl"};

    Solution* s = new Solution();

    res = s->howSum(n, nums);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

//    cout << res << endl;

    return 0;
}
