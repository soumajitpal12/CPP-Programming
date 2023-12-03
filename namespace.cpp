#include <iostream>
using namespace std;

namespace ns1 {
    int x = 10;
    void printX() {
        cout << "x = " << x << endl;
    }
}

namespace ns2 {
    int x = 20;
    void printX() {
        cout << "x = " << x <<endl;
    }
}

int main() {
    ns1::printX(); // outputs "x = 10"
    ns2::printX(); // outputs "x = 20"
    
    return 0;
}

