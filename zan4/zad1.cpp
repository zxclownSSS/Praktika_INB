#include <iostream>
#include <vector>
#include <algorithm>

int findLargestLessThan100(const std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] < 100) {
            result = arr[mid];  
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    std::vector<int> arr = {50, 20, 130, 80, 99, 150};
    std::sort(arr.begin(), arr.end());
    std::cout << "Largest number less than 100: " << findLargestLessThan100(arr) << std::endl;
    return 0;
}


