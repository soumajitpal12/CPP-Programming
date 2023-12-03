#include <iostream>
using namespace std;

class EvenOrOdd {
  int num;
  public:
    void input(){
    	cout<<"enter a number: "<<endl;
	cin>>num;
    }	
  public:
    void check() {
      if (num % 2 == 0) {
        cout << num << " is even."<<endl;
      } else {
        cout << num << " is odd."<<endl;
      }
    }
};

int main() {
  EvenOrOdd obj;
  obj.input();
  obj.check();
  
  return 0;
}
  
