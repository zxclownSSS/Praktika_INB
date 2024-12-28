#include <iostream>
#include <vector>
#include <queue>

int main() {
    int n, m;
    std::cin >> n >> m;
    

    std::vector<std::vector<int>> adjList(n);
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        --a; --b;  
        
        adjList[a].push_back(b);
        adjList[b].push_back(a); 
    }
    
    // BFS
    std::queue<int> q;
    std::vector<bool> visited(n, false);
    q.push(0); 
    visited[0] = true;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        std::cout << v + 1 << " ";  
        
        for (int neighbor : adjList[v]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    
    return 0;
}



