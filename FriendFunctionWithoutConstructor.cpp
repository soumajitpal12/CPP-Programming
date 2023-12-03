#include<iostream>
using namespace std;

class Number {
private:
    int num1, num2, num3;
public:
    void get_numbers() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }
    friend int find_largest_number(Number);
};

int find_largest_number(Number n) {
    int largest = 0;
    if (n.num1 > largest) {
        largest = n.num1;
    }
    if (n.num2 > largest) {
        largest = n.num2;
    }
    if (n.num3 > largest) {
        largest = n.num3;
    }
    return largest;
}

int main() {
    Number n;
    n.get_numbers();
    cout << "Largest number: " << find_largest_number(n) << endl;
    return 0;
}
