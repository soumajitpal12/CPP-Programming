#include <iostream>
using namespace std;

class PalindromeChecker {
private:
    int num;

public:
    PalindromeChecker(int n) {
        num = n;
    }

    bool isPalindrome() {
        int reversedNum = 0, originalNum = num;
        while (originalNum > 0) {
            int digit = originalNum % 10;
            reversedNum = (reversedNum * 10) + digit;
            originalNum /= 10;
        }
        return num == reversedNum;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    PalindromeChecker pc(num);
    if (pc.isPalindrome() ){
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}

