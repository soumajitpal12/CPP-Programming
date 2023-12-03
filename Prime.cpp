#include<iostream>
using namespace std;

class PrimeChecker {
    public:
        void checkPrime(int num) {
            bool isPrime = true;
            if(num <= 1) {
                isPrime = false;
            }
            else {
                for(int i=2; i<=num/2; i++) {
                    if(num%i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if(isPrime) {
                cout << num << " is a prime number." << endl;
            }
            else {
                cout << num << " is not a prime number." << endl;
            }
        }
};

int main() {
    PrimeChecker pc;
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    pc.checkPrime(num);
    return 0;
}

