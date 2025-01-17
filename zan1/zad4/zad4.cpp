#include <iostream>
#include <cmath>

int maxSquare(int l, int r) {
    int max = -1;
    for (int i = r; i >= l; i--) {
        int sqrtNum = sqrt(i);
        if (sqrtNum * sqrtNum == i) {
            max = i;
            break;
        }
    }
    return max;
}

int main() {
    int l, r;

    std::cin >> l >> r;

    int result = maxSquare(l, r);

    if (result != -1) {
        std::cout << l << "  " << r << ": " << result << std::endl;
    } else {
        std::cout << "решений нет " << l << "  " << r << std::endl;
    }

    return 0;
}
