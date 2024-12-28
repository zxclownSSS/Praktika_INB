#include <iostream>
#include <vector>

std::pair<int, int> findMaxBForK(const std::vector<std::pair<int, int>>& pairs, int k) {
    int left = 0, right = pairs.size() - 1;
    std::pair<int, int> result = {-1, -1};
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (pairs[mid].first == k) {
            result = std::max(result, pairs[mid]);
            left = mid + 1;
        } else if (pairs[mid].first < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    std::vector<std::pair<int, int>> pairs = {{1, 5}, {2, 7}, {3, 8}, {1, 10}, {3, 12}};
    int k = 1;
    std::pair<int, int> result = findMaxBForK(pairs, k);
    std::cout << "Pair with a = " << k << " and max b: (" << result.first << ", " << result.second << ")" << std::endl;
    return 0;
}
