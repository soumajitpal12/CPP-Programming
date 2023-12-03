#include <iostream>

class AverageCalculator {
public:
    void setRange(int n) {
        sum = 0;
        count = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
            count++;
        }
    }
    
    double getAverage() {
        return sum / (double)count;
    }
    
private:
    int sum;
    int count;
};

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    AverageCalculator calculator;
    calculator.setRange(n);
    
    std::cout << "The average of the numbers 1 to " << n << " is " << calculator.getAverage() << std::endl;
    
    return 0;
}

