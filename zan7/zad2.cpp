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
    

    std::queue<int> q;
    std::vector<int> distance(n, -1); 
    q.push(0);  
    distance[0] = 0;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        for (int neighbor : adjList[v]) {
            if (distance[neighbor] == -1) {
                distance[neighbor] = distance[v] + 1;
                q.push(neighbor);
            }
        }
    }
    

    for (int i = 0; i < n; ++i) {
        if (distance[i] % 2 == 0) {
            std::cout << i + 1 << " ";  
        }
    }
    
    return 0;
}




