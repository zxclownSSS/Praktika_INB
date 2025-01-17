#include <iostream>
#include <cmath>

class Point {
private:
    double x, y;

public:

    Point(double x, double y) : x(x), y(y) {}


    void printCoordinates() const {
        std::cout << "Point(" << x << ", " << y << ")\n";
    }

 
    double distanceToOrigin() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point p(3, 4);
    p.printCoordinates();
    std::cout << "Distance to origin: " << p.distanceToOrigin() << std::endl;
    return 0;
}
