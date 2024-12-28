#include <iostream>
#include <vector>

bool isOddDegree(int v, const std::vector<std::vector<int>>& graph) {
    return graph[v].size() % 2 == 1;
}

int countVerticesWithEvenDegreeAndOddNeighbors(const std::vector<std::vector<int>>& graph, int n) {
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (graph[i].size() % 2 == 0) {  
            bool allOddNeighbors = true;
            for (int neighbor : graph[i]) {
                if (graph[neighbor].size() % 2 == 0) {  
                    allOddNeighbors = false;
                    break;
                }
            }
            if (allOddNeighbors) {
                ++count;
            }
        }
    }
    
    return count;
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

    std::cout << "Count of vertices with even degree and odd neighbors: " << countVerticesWithEvenDegreeAndOddNeighbors(graph, n) << std::endl;

    return 0;
}


