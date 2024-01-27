#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:

    //dfs
    bool hasPathDFS(unordered_map<char, vector<char>> &graph, char src, char dst){
        if(src == dst) {
            return true;
        }

        for(auto neighbor: graph[src]){
            if(hasPathDFS(graph, neighbor, dst)){
                return true;
            }
        }

        return false;
    }

    //bfs
    bool hasPathBFS(unordered_map<char, vector<char>> &graph, char src, char dst){
        queue<char> q;
        q.push(src);

        while(!q.empty()){
            auto curr = q.front();
            q.pop();

            if(curr == dst){
                return true;
            }

            for(auto neighbor: graph[curr]){
                q.push(neighbor);
            }
        }

        return false;
    }
};
