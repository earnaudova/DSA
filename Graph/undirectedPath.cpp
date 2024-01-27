#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:

    bool undirectedPath(unordered_map<char, char> &graph, char src, char dst){
        unordered_map<char, vector<char>> adj_list;
        unordered_set<char> visited;

        for(auto c: graph){
            adj_list[c.first].push_back(c.second);
            adj_list[c.second].push_back(c.first);
        }

        return dfs(adj_list, visited, src, dst);
    }

    bool dfs(unordered_map<char, vector<char>> &adj_list, unordered_set<char> &visited, char src, char dst){
        if(src == dst){
            return true;
        }

        if(visited.count(src)){
            return false;
        }

        visited.insert(src);

        for(auto neighbor: adj_list[src]){
            if(dfs(adj_list, visited, neighbor, dst)) {
                return true;
            }
        }

        return false;
    }
};