#include <iostream>
#include <cmath>

class Segment {
private:
    class Point {
    public:
        double x, y;
        Point(double x, double y) : x(x), y(y) {}
    };

    Point p1, p2;

public:

    Segment(Point p1, Point p2) : p1(p1), p2(p2) {}


    double length() const {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }
};

int main() {
    Segment::Point p1(0, 0), p2(3, 4);
    Segment s(p1, p2);
    std::cout << "Length of segment: " << s.length() << std::endl;
    return 0;
}
