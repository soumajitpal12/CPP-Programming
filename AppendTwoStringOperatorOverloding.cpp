#include <iostream>
#include <string>
using namespace std;

string operator+(string a, string b) {
    return a.append(b);
}

int main() {
    string s1 = "Hello, ";
    string s2 = "Ma'am!";
    string s3 = s1 + s2;
    cout << s3 << endl; 
    return 0;
}

