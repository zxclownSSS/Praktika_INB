#include <iostream>
#include <vector>

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
    
    int maxDegree = -1;
    int vertexWithMaxDegree = -1;
    

    for (int i = 0; i < n; ++i) {
        int degree = adjList[i].size();
        if (degree > maxDegree) {
            maxDegree = degree;
            vertexWithMaxDegree = i;
        }
    }
    

    bool foundEdge = false;
    for (int i = 0; i < n; ++i) {
        if (i != vertexWithMaxDegree) {
            for (int neighbor : adjList[vertexWithMaxDegree]) {
                if (neighbor == i) {
                    foundEdge = true;
                    break;
                }
            }
        }
        if (foundEdge) {
            break;
        }
    }
    
    if (foundEdge) {
        std::cout << "There is an edge between two vertices with the maximum degree." << std::endl;
    } else {
        std::cout << "There is no edge between two vertices with the maximum degree." << std::endl;
    }

    return 0;
}



