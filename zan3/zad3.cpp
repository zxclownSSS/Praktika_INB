#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

class Cinema {
private:
    std::vector<std::pair<std::string, double>> movies;

public:

    Cinema() {}

    Cinema(const std::vector<std::pair<std::string, double>>& movies) : movies(movies) {}


    void addMovie(const std::string& title, double price) {
        movies.push_back({title, price});
    }


    std::pair<std::string, double> cheapestMovie() const {
        auto minElem = *std::min_element(movies.begin(), movies.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        return minElem;
    }

    std::pair<std::string, double> mostExpensiveMovie() const {
        auto maxElem = *std::max_element(movies.begin(), movies.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        return maxElem;
    }

    int countDuplicateMovies() const {
        std::map<std::string, int> movieCount;
        for (const auto& movie : movies) {
            movieCount[movie.first]++;
        }

        int count = 0;
        for (const auto& entry : movieCount) {
            if (entry.second > 1) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Cinema cinema1;
    cinema1.addMovie("Movie1", 10.5);
    cinema1.addMovie("Movie2", 12.0);
    cinema1.addMovie("Movie1", 10.5);

    auto cheapest = cinema1.cheapestMovie();
    auto expensive = cinema1.mostExpensiveMovie();
    int duplicates = cinema1.countDuplicateMovies();

    std::cout << "Cheapest Movie: " << cheapest.first << " - " << cheapest.second << std::endl;
    std::cout << "Most Expensive Movie: " << expensive.first << " - " << expensive.second << std::endl;
    std::cout << "Number of duplicate movies: " << duplicates << std::endl;

    return 0;
}
