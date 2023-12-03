#include <iostream>
using namespace std;

class AreaCalculator {
public:
  // Function to calculate the area of a square
  int calculateArea(int side) {
    return side * side;
  }

  // Function to calculate the area of a rectangle
  double calculateArea(double length, double width) {
    return length * width;
  }

  // Function to calculate the area of a circle
  double calculateArea(double radius) {
    return 3.14 * radius * radius;
  }
};

int main() {
  AreaCalculator ac;

  // Calculate area of a square
  cout << "Area of square: " << ac.calculateArea(5) << endl;

  // Calculate area of a rectangle
  cout << "Area of rectangle: " << ac.calculateArea(4.0, 6.0) << endl;

  // Calculate area of a circle
  cout << "Area of circle: " << ac.calculateArea(3.0) << endl;

  return 0;
}

