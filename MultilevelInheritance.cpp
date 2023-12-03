#include <iostream>
//#include <string>
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
        void read_marks1() {
            cout << "Enter marks sequentially for Semester 1 (Subject1, Subject2, Subject3) : "<<endl;
            cin >> sub1>> sub2>>sub3;
        }
        void displayPercentage1() {
        	total1=sub1+sub2+sub3;
        	avg1= total1/3.0;
            cout << "Total marks: " << total1 << endl;
            cout << "Percentage: " << avg1 << endl;
        }
};

class Sem2 : public Sem1 {
    protected:
        float sub4, sub5, sub6, total2, avg2;
    public:
        void read_marks2() {
            cout << "Enter marks sequentially for Semester 2 (Subject4, Subject5, Subject6) : "<<endl;
            cin >> sub4>> sub5>>sub6;
        }
        void displayPercentage2() {
        	total2=sub4+sub5+sub6;
        	avg2= total2/3.0;
            cout << "Total marks: " << total2 << endl;
            cout << "Percentage: " << avg2 << endl;
        }
};

int main() {
    Sem2 sobj;
    sobj.read_info();
    
    cout << endl << "Details of student are:" << endl;
    sobj.displayDetails();
    
    cout << endl << "Semester 1 percentage:" << endl;
    sobj.read_marks1();
    sobj.displayPercentage1();
    
    cout << endl << "Semester 2 percentage:" << endl;
    sobj.read_marks2();
    sobj.displayPercentage2();
    
    return 0;
}
