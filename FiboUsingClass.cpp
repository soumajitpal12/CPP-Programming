#include <iostream>
using namespace std;

class Fibonacci {
    public:
        void printSeries(int n) {
            int t1 = 0, t2 = 1, nextTerm;
            for (int i = 1;i<= n;i++) {
                cout << t1 <<endl;
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
            }
        }
};

int main() {
    int n;
    Fibonacci f;
    cout << "Enter the number of terms: ";
    cin >> n;
    f.printSeries(n);
    
    return 0;
}
