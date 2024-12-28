#include <iostream>
#include <vector>

int countFiveDigitNumbers(const std::vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    

    int first = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= 10000) {
            first = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    

    left = 0;
    right = arr.size() - 1;
    int last = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= 99999) {
            last = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    

    if (first != -1 && last != -1) {
        return last - first + 1;
    }
    return 0;
}

int main() {
    std::vector<int> arr = {1, 10, 1000, 99999, 100000, 500000};
    std::cout << "Count of five-digit numbers: " << countFiveDigitNumbers(arr) << std::endl;
    return 0;
}
