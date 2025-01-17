#include <iostream>
#include <vector>
#include <queue>
#include <climits>

void bfs(int start, const std::vector<std::vector<int>>& adjList, std::vector<int>& distance) {
    std::queue<int> q;
    q.push(start);
    distance[start] = 0;
    
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
}

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
    
    int bestCity = -1;
    int minMaxDistance = INT_MAX;
    

    for (int i = 0; i < n; ++i) {
        std::vector<int> distance(n, -1);
        bfs(i, adjList, distance);
        

        int maxDistance = 0;
        for (int j = 0; j < n; ++j) {
            if (distance[j] == -1) {
                maxDistance = INT_MAX;
                break;
            }
            maxDistance = std::max(maxDistance, distance[j]);
        }
        
        if (maxDistance < minMaxDistance) {
            minMaxDistance = maxDistance;
            bestCity = i;
        }
    }
    
    std::cout << bestCity + 1 << std::endl;
    
    return 0;
}



