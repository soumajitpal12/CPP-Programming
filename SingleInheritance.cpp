#include <iostream>
#include <string>
using namespace std;

class Student {
    protected:
        string name;
        int rollNo;
    public:
        void read_info() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
        }
        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNo << endl;
        }
};

class Sem1 : public Student {
    protected:
        float sub1,sub2,sub3,total1,avg1;
    public:
        void read_marks() {
            cout << "Input marks sequentially(Subject1, Subject2, Subject3) : "<<endl;
            cin >> sub1>> sub2>>sub3;
        }
        void displayPercentage() {
        	total1=sub1+sub2+sub3;
        	avg1= total1/3.0;
            cout << "Percentage: " << avg1 << endl;
        }
};

int main() {
    Sem1 sobj;
    sobj.read_info();
    sobj.read_marks();
    
     sobj.displayDetails();
    sobj.displayPercentage();
    return 0;
}

