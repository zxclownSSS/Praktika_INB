#include <iostream>
#include <vector>

int countVerticesWithEvenEdges(const std::vector<std::vector<int>>& graph, int n) {
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        bool valid = true;
        for (int neighbor : graph[i]) {
            if (neighbor % 2 == 1) {  
                valid = false;
                break;
            }
        }
        if (valid) {
            ++count;
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
        --u; --v;  //
        graph[u].push_back(v);
    }

    std::cout << "Count of vertices with only even-numbered edges: " << countVerticesWithEvenEdges(graph, n) << std::endl;

    return 0;
}


