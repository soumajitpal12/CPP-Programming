#include<iostream>
using namespace std;

class Calculator {
    private:
        double num1, num2, result;
    public:
        void input_data() {
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;
        }
        void display_result() {
            cout<<"Result: "<<result<<endl;
        }
        void add() {
            result = num1 + num2;
            display_result();
        }
        void sub() {
            result = num1 - num2;
            display_result();
        }
        void multi() {
            result = num1 * num2;
            display_result();
        }
        void div() {
            if(num2 != 0) {
                result = num1 / num2;
                display_result();
            }
            else {
                cout<<"Cannot divide by zero"<<endl;
            }
        }
        void rem() {
            if(num2 != 0) {
                result = (int)num1 % (int)num2;
                display_result();
            }
            else {
                cout<<"Cannot divide by zero"<<endl;
            }
        }
};

int main() {
    Calculator calc;
    int choice;
    while(true) {
        cout<<"\n\nCalculator"<<endl;
        cout<<"1. Add"<<endl;
        cout<<"2. Subtract"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Remainder"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                calc.input_data();
                calc.add();
                break;
            case 2:
                calc.input_data();
                calc.sub();
                break;
            case 3:
                calc.input_data();
                calc.multi();
                break;
            case 4:
                calc.input_data();
                calc.div();
                break;
            case 5:
                calc.input_data();
                calc.rem();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

