#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution{
public:
    int largestComponent(unordered_map<int, vector<int>> &graph){
        unordered_set<int> visited;
        int max_count = 0;

        for(auto node: graph){
            max_count = max(max_count, dfs(graph, visited, node.first));
        }

        return max_count;
    }

    int dfs(unordered_map<int, vector<int>> &graph, unordered_set<int> &visited, int node){
        if(visited.count(node)){
            return 0;
        }

        visited.insert(node);

        int cnt = 1;
        for(auto neighbor: graph[node]){
            cnt += dfs(graph, visited, neighbor);
        }

        return cnt;
    }
};