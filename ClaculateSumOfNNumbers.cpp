#include <iostream>
using namespace std;

class SumCalculator {
public:
    int calculateSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    SumCalculator calculator;
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    int sum = calculator.calculateSum(n);
    cout << "The sum of 1 to " << n << " is " <<sum;
    return 0 ;
}

