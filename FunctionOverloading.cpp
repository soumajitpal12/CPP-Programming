#include <iostream>
using namespace std;

// define a constant value for pi
#define PI 3.14159 

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
    return PI * radius * radius;
  }
};

int main() {
  AreaCalculator ac;

  // Calculate area of a square
  int squareArea = ac.calculateArea(5);
  cout << "Area of square: " << squareArea << endl;

  // Calculate area of a rectangle
  double rectangleArea = ac.calculateArea(4.3, 6.3);
  cout << "Area of rectangle: " << rectangleArea << endl;

  // Calculate area of a circle
  double circleArea = ac.calculateArea(3.0);
  cout << "Area of circle: " << circleArea << endl;

  return 0;
}
