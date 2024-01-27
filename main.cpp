#include <iostream>
#include "projectHeader.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    int m = 8;
    int n = 11;
    vector<int> nums = {1, 2, 5};
    vector<vector<string>>res;
    string str = "purple";
    vector<string> wordBank = {"purp", "p", "ur", "le", "purpl"};

    /*
    unordered_map<char, vector<char>> graph = {
            {'a', {'b', 'c'}},
            {'b', {'d'}},
            {'c', {'e'}},
            {'d', {'f'}},
            {'e', {}},
            {'f', {}}
    }; */

    /*
    unordered_map<char, char> graph = {
            {'i', 'j'},
            {'k', 'i'},
            {'m', 'k'},
            {'l', 'k'},
            {'j', 'k'},
            {'o', 'n'},
    }; */

    Solution* s = new Solution();

    s->undirectedPath(graph, 'i', 'l');
//    for(int i = 0; i < res.size(); i++){
//        cout << res[i] << endl;
//    }

//    cout << res << endl;
//
    return 0;
}
