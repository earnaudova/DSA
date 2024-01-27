#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

/* graph adjacency list initialization:

unordered_map<char, vector<char>> graph = {
        {'a', {'b', 'c'}},
        {'b', {'d'}},
        {'c', {'e'}},
        {'d', {'f'}},
        {'e', {}},
        {'f', {}}
};

*/

class Solution{
public:

    //Iterative
    void bfs(unordered_map<char, vector<char>> &graph, char source){
        queue<char> q;
        q.push('a');

        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            cout << curr << endl;
            for(auto neighbor: graph[curr]){
                q.push(neighbor);
            }
        }
    }

    //Recursion
    void bfsRec(unordered_map<char, vector<char>> &graph, char source){
        cout << source << endl;

        for(auto neighbor: graph[source]){
            bfs(graph, neighbor);
        }
    }
};



