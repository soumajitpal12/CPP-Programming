#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNumber;
public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

// Intermediate class inheriting from the base class
class Semester1 : public Student {
protected:
    int marks1[3]; // Array to store marks of 3 subjects in Semester 1
public:
    void getMarks1() {
        cout << "Enter marks in Semester 1 for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks1[i];
        }
    }

    float calculatePercentage1() {
        int totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            totalMarks += marks1[i];
        }
        return static_cast<float>(totalMarks) / (3 * 100) * 100;
    }
};

// Derived class inheriting from the intermediate class
class Semester2 : public Semester1 {
private:
    int marks2[3]; // Array to store marks of 3 subjects in Semester 2
public:
    void getMarks2() {
        cout << "Enter marks in Semester 2 for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks2[i];
        }
    }

    float calculatePercentage2() {
        int totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            totalMarks += marks2[i];
        }
        return static_cast<float>(totalMarks) / (3 * 100) * 100;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Semester 1 for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks1[i] << " ";
        }
        cout << endl;
        cout << "Marks in Semester 2 for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks2[i] << " ";
        }
        cout << endl;

        float percentage1 = calculatePercentage1();
        float percentage2 = calculatePercentage2();
        cout << "Percentage in Semester 1: " << percentage1 << "%" << endl;
        cout << "Percentage in Semester 2: " << percentage2 << "%" << endl;
    }
};

int main() {
    Semester2 student;

    student.getDetails();
    student.getMarks1();
    student.getMarks2();

    cout << "Student Details:" << endl;
    student.displayDetails();

    return 0;
}

