#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution{
public:
    int connectedComponentCount(unordered_map<int, vector<int>> &graph){
        unordered_set<int> visited;
        int count = 0;
        for(auto node : graph){
            if(dfs(graph, visited, node.first)){
                count++;
            }
        }

        return count;
    }

    bool dfs(unordered_map<int, vector<int>> &graph, unordered_set<int> &visited, int node){
        if(visited.count(node)){
            return false;
        }

        visited.insert(node);

        for(auto neighbor: graph[node]){
            dfs(graph, visited, neighbor);
        }

        return true;
    }
};