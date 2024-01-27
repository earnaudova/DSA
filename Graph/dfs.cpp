#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>

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
    void dfs(unordered_map<char, vector<char>> &graph, char source){
        stack<char> st;
        st.push('a');

        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            cout << curr << endl;
            for(auto neighbor: graph[curr]){
                st.push(neighbor);
            }
        }
    }

    //Recursion
    void dfsRec(unordered_map<char, vector<char>> &graph, char source){
        cout << source << endl;

        for(auto neighbor: graph[source]){
            dfs(graph, neighbor);
        }
    }
};





