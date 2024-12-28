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
    std::vector<int> costs(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> costs[i];
    }
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        std::cin >> u >> v;
        --u; --v;  
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    std::vector<bool> visited(n, false);
    int totalCost = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int minCost = costs[i];
            dfs(i, visited, graph);
            for (int j = 0; j < n; ++j) {
                if (visited[j]) {
                    minCost = std::min(minCost, costs[j]);
                }
            }
            totalCost += minCost;
        }
    }

    std::cout << "Minimum cost: " << totalCost << std::endl;

    return 0;
}


