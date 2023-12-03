#include <iostream>
using namespace std;

class AreaCalculator {
public:
    double calculateArea(double radius) {
        return 3.14 * radius * radius;
    }

    double calculateArea(double length, double width) {
        return length * width;
    }

    double calculateArea(double base, double height, char type) {
        if (type == 't') {
            return 0.5 * base * height;
        }
        else {
            return -1;
        }
    }
};

int main() {
    AreaCalculator ac;
    double radius = 5;
    double length = 6;
    double width = 4;
    double base = 3;
    double height = 2;

    // Calculate area of a circle
    cout << "Area of circle with radius " << radius << " = " << ac.calculateArea(radius) << endl;

    // Calculate area of a rectangle
    cout << "Area of rectangle with length " << length << " and width " << width << " = " << ac.calculateArea(length, width) << endl;

    // Calculate area of a triangle
    cout << "Area of triangle with base " << base << " and height " << height << " = " << ac.calculateArea(base, height, 't') << endl;

    return 0;
}

