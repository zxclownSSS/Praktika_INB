#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;  

    std::map<int, int> rooms; 
    std::string command;
    int room_number;

    for (int i = 0; i < n; i++) {
        std::cin >> command >> room_number;  

        if (command == "+") {
            rooms[room_number]++;  
        } 
        else if (command == "-") {
            if (rooms[room_number] > 0) {
                rooms[room_number]--;  
            }
        } 
        else if (command == "?") {
            std::cout << rooms[room_number] << std::endl; 
        }
    }

    return 0;
}
