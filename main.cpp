#include <iostream>
#include "projectHeader.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    int m = 8;
    int n = 11;
    vector<int> nums = {1, 2, 5};
    int res;
    string str = "thehat";
    vector<string> wordBank = {"with", "example", "science"};

    Solution* s = new Solution();

    res = s->minStickers(wordBank, str);
//    for(int i = 0; i < res.size(); i++){
//        cout << res[i] << endl;
//    }

    cout << res << endl;

    return 0;
}
