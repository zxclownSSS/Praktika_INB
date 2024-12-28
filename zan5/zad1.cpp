#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> adjMatrix(n, std::vector<int>(n, 0));
    
    for (int i = 0; i < m; ++i) {
        int a, b;
        std::cin >> a >> b;
        --a; --b;  
        
        adjMatrix[a][b] = 1;
        adjMatrix[b][a] = 1;  
    }
    

    for (const auto& row : adjMatrix) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}



