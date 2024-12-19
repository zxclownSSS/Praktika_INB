#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;  

    int n = s.length();
    if (n == 0) {
        std::cout << "" << std::endl;  
        return 0;
    }

    std::string max_substr = "";  

    for (int i = 0; i < n; i++) {
        s[i]
        for (int j = n - 1; j >= i; j--) {
            if (s[i] == s[j]) {
                std::string substring = s.substr(i, j - i + 1);
                if (substring.length() > max_substr.length()) {
                    max_substr = substring;  
                }
                break;  
            }
        }
    }

    std::cout << max_substr << std::endl;  

    return 0;
}