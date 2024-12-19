#include <iostream>
#include <algorithm>

bool checkString(std::string s) {
    std::string original = s;
    std::reverse(s.begin(), s.end());
    return original == s;
}

int main() {
    std::string s;
    std::cin >> s;

    if (checkString(s)) {
        std::cout << "начинается и заканчивается одинаковыми симовалами." << std::endl;
    } else {
        std::cout << "не заканчивается." << std::endl;
    }

    return 0;
}
/* почему то не работает в русскими языком, как пофиксить не нашел :) */ 
/* почему то не работает в русскими языком, как пофиксить не нашел :) */ 
/* почему то не работает в русскими языком, как пофиксить не нашел :) */ 
/* почему то не работает в русскими языком, как пофиксить не нашел :) */ 
