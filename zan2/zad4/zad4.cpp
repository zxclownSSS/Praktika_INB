#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m, k;
    std::cin >> n >> m;
    
    std::vector<int> firstSet(n);
    std::vector<int> secondSet(m);
    
    for(int i=0; i<n; i++) {
        std::cin >> firstSet[i];
    }
    
    for(int i=0; i<m; i++) {
        std::cin >> secondSet[i];
    }
    
    std::sort(firstSet.begin(), firstSet.end(), std::greater<int>());
    std::sort(secondSet.begin(), secondSet.end(), std::greater<int>());
    
    std::cin >> k;
    
    int maxWeight = 0;
    
    for(int i=1; i<=k-1; i++) {
        if(i > n || k-i > m) {
            continue;
        }
        
        int sum = 0;
        
        for(int j=0; j<i; j++) {
            sum += firstSet[j];
        }
        
        for(int j=0; j<k-i; j++) {
            sum += secondSet[j];
        }
        
        maxWeight = std::max(maxWeight, sum);
    }
    
    std::cout << maxWeight << std::endl;

    return 0;
}
