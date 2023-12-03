#include <iostream>
using namespace std;

class Calculator {
public:
   inline int max(int a, int b) {
        return (a > b) ? a : b;
    }
};

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    Calculator calc;
    int result = calc.max(num1, num2);
    cout << "The largest number is: " << result << endl;
    return 0;
}

