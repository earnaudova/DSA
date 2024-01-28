#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int shortestPath(unordered_map<char, char> &graph, int src, int dst){
        unordered_map<char, vector<char>> adj_list;
        unordered_set<char> visited;
        queue<pair<char, int>> q;

        for(auto p: graph){
            adj_list[p.first].push_back(p.second);
            adj_list[p.second].push_back(p.first);
        }

        q.push({src, 0});

        while(!q.empty()){
            auto [curr, distance] = q.front();
            q.pop();

            if(curr == dst){
                return distance;
            }

            for(auto neighbor: adj_list[curr]){
                if(!visited.count(neighbor)){
                    visited.insert(neighbor);
                    q.push({neighbor, distance+1});
                }
            }
        }

        return 0;
    }
};