#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int countCommonMovies(const Cinema& cinema1, const Cinema& cinema2) {
    std::vector<std::string> titles1, titles2;


    for (const auto& movie : cinema1.getMovies()) {
        titles1.push_back(movie.first);
    }


    for (const auto& movie : cinema2.getMovies()) {
        titles2.push_back(movie.first);
    }


    int commonCount = 0;
    for (const auto& title1 : titles1) {
        if (std::find(titles2.begin(), titles2.end(), title1) != titles2.end()) {
            commonCount++;
        }
    }

    return commonCount;
}

int main() {
    Cinema cinema1;
    cinema1.addMovie("Movie1", 10.5);
    cinema1.addMovie("Movie2", 12.0);
    
    Cinema cinema2;
    cinema2.addMovie("Movie2", 15.0);
    cinema2.addMovie("Movie3", 11.0);

    int commonMovies = countCommonMovies(cinema1, cinema2);
    std::cout << "Number of common movies: " << commonMovies << std::endl;

    return 0;
}

