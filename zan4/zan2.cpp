#include <iostream>
#include <vector>
#include <string>

bool containsB(const std::string& str) {
    return str.find('b') != std::string::npos;
}

int findFirstWithoutB(const std::vector<std::string>& strings) {
    int left = 0, right = strings.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (!containsB(strings[mid])) {
            result = mid;  
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return result;
}

int main() {
    std::vector<std::string> strings = {"ab", "b", "bb", "a", "c", "xyz"};
    std::cout << "Index of the first string without 'b': " << findFirstWithoutB(strings) << std::endl;
    return 0;
}
