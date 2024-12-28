#include <iostream>
#include <vector>

void dfs(int v, std::vector<bool>& visited, const std::vector<std::vector<int>>& graph) {
    visited[v] = true;
    for (int neighbor : graph[v]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, graph);
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
    int components = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, visited, graph);
            ++components;
        }
    }

    std::cout << "Number of connected components: " << components << std::endl;

    return 0;
}

