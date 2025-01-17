#include <iostream>
#include <vector>
#include <stack>

void dfs(int v, std::vector<bool>& visited, const std::vector<std::vector<int>>& graph) {
    std::stack<int> s;
    s.push(v);
    visited[v] = true;
    
    while (!s.empty()) {
        int node = s.top();
        s.pop();
        std::cout << node + 1 << " ";  
        
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                s.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        std::cin >> u >> v;
        --u; --v;  
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    std::vector<bool> visited(n, false);
    dfs(0, visited, graph);  

    return 0;
}
