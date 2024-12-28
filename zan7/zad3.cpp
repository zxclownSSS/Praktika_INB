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
    

    std::vector<int> distance1(n, -1);
    bfs(0, adjList, distance1);
    

    int farthestVertex = 0;
    for (int i = 0; i < n; ++i) {
        if (distance1[i] > distance1[farthestVertex]) {
            farthestVertex = i;
        }
    }
    

    std::vector<int> distance2(n, -1);
    bfs(farthestVertex, adjList, distance2);
    

    int maxDistance = -1;
    int u = -1, v = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (distance2[i] + distance2[j] > maxDistance) {
                maxDistance = distance2[i] + distance2[j];
                u = i;
                v = j;
            }
        }
    }
    
    std::cout << u + 1 << " " << v + 1 << std::endl;
    
    return 0;
}



