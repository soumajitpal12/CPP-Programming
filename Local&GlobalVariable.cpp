#include <iostream>
using namespace std;

int global_var = 100;  // global variable

int main() {
    int local_var = 50;  // local variable
    
    cout << "Global variable value: " << global_var << endl;
    cout << "Local variable value: " << local_var << endl;
    
    global_var = 200;  // changing the value of global variable
    local_var = 100;   // changing the value of local variable
    
    cout << "Global variable value after modification: " << global_var << endl;
    cout << "Local variable value after modification: " << local_var << endl;
    
    return 0;
}

