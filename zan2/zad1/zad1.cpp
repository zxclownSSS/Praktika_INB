#include <iostream>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    int* arr = new int[n];
    double sum = 0;
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    double average = sum / n;
    double diff = max_val - average;

    std::cout << diff;

    delete[] arr;

    return 0;
}
