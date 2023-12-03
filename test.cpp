#include <iostream>
using namespace std;

#define PI 3.14159 // define a constant value for pi

class AreaCalculator {
public:
  // Function to calculate the area of a square
  double calculateArea(double side) {
    return side * side;
  }

  // Function to calculate the area of a rectangle
  double calculateArea(double length, double width) {
    return length * width;
  }

  // Function to calculate the area of a circle
  double calculateArea(double radius) {
    return PI * radius * radius;
  }
};

int main() {
  AreaCalculator ac;

  // Calculate area of a square
  double squareArea = ac.calculateArea(5.0);
  cout << "Area of square: " << squareArea << endl;

  // Calculate area of a rectangle
  double rectangleArea = ac.calculateArea(4.0, 6.0);
  cout << "Area of rectangle: " << rectangleArea << endl;

  // Calculate area of a circle
  double circleArea = ac.calculateArea(3.0);
  cout << "Area of circle: " << circleArea << endl;

  return 0;
}

