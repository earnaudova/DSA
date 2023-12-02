#include <iostream>
#include "projectHeader.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    int m = 8;
    int n = 11;
    vector<int> nums = {1, 2, 5};
    bool res;
    string str = "skateboard";
    vector<string> wordBank = {"bo", "rd", "ate", "t", "ska", "sk", "boar"};

    Solution* s = new Solution();

    res = s->canConstruct(str, wordBank);
//    for(int i = 0; i < res.size(); i++){
//        cout << res[i] << endl;
//    }

    cout << res << endl;

    return 0;
}
