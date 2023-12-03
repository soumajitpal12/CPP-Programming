#include<iostream>
using namespace std;

class Number {
  int num1, num2;
public:
  Number(int a, int b) {
    num1 = a;
    num2 = b;
  }
  friend int largest(Number n);
};

int largest(Number n) {
  if(n.num1 > n.num2) {
    return n.num1;
  }
  else {
    return n.num2;
  }
}

int main() {
  Number n1(10, 20);
  int largest_num = largest(n1);
  cout << "The largest number is: " << largest_num << endl;
  return 0;
}

