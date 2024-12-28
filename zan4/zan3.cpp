#include <iostream>
#include <vector>

int findFirstSixDigit(const std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] >= 100000) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    return result;
}

int findLastSixDigit(const std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] <= 999999) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() {
    std::vector<int> arr = {1, 10, 50000, 100000, 200000, 999999, 1000000, 2000000};
    int first = findFirstSixDigit(arr);
    int last = findLastSixDigit(arr);
    std::cout << "First six-digit number index: " << first << std::endl;
    std::cout << "Last six-digit number index: " << last << std::endl;
    return 0;
}
