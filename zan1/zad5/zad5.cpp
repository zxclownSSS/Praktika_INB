#include <iostream>

int fibonacciSum(int n) {
    if(n <= 0)
        return 0;
    
    int fib[n];
    
    fib[0] = 0;
    fib[1] = 1;
    
    int sum = fib[0] + fib[1];
    
    for(int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        sum += fib[i];
    }
    
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    
    std::cout << fibonacciSum(n) << std::endl;
    
    return 0;
}
