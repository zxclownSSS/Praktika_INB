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
    
    for (int i = 0; i < n; ++i) {
        std::cout << i + 1 << ": ";
        for (int neighbor : adjList[i]) {
            std::cout << neighbor + 1 << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


