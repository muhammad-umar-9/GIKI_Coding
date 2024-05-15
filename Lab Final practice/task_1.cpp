#include <iostream>
#include <string>

using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    virtual void getData()
     {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    virtual void displayData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Department {
protected:
    string name;
    double gpaRequirement;

public:
    virtual void getData() {
        cout << "Enter department name: ";
        cin >> name;
        cout << "Enter minimum GPA requirement: ";
        cin >> gpaRequirement;
    }

    virtual void displayData() {
        cout << "Department: " << name << endl;
        cout << "Minimum GPA requirement: " << gpaRequirement << endl;
    }
};

class Student : public Person {
protected:
    double gpa;
    Department* department; // Aggregation

public:
    Student(Department* dept) : department(dept) {}

    void getData() override
     {
        Person::getData();
        cout << "Enter GPA: ";
        cin >> gpa;
        department->getData();
    }

    void displayData() override 
    {
        Person::displayData();
        cout << "GPA: " << gpa << endl;
        department->displayData();
    }

    virtual double calculateScholarship() = 0;
};

class Advisor {
protected:
    string name;
    string contact;

public:
    void getData() {
        cout << "Enter advisor name: ";
        cin >> name;
        cout << "Enter advisor contact: ";
        cin >> contact;
    }

    void displayData() {
        cout << "Advisor Name: " << name << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Master : public Student {
private:
    Advisor advisor;

public:
    Master(Department* dept) : Student(dept) {}

    void getData() override {
        Student::getData();
        advisor.getData();
    }

    void displayData() override {
        Student::displayData();
        advisor.displayData();
    }

    double calculateScholarship() override {
        // Scholarship calculation logic for Master's students considering GPA and department criteria
        if (gpa >= department->gpaRequirement) {
            return 0.5 * gpa; // Replace with your specific scholarship calculation formula
        } else {
            return 0.0;
        }
    }
};

int main() {
    Department csDepartment; // Example department
    csDepartment.name = "Computer Science";
    csDepartment.gpaRequirement = 3.5;

    Master masterStudent(&csDepartment);
    masterStudent.getData();

    cout << "\nStudent Details:" << endl;
    masterStudent.displayData();

    double scholarship = masterStudent.calculateScholarship();
    if (scholarship > 0) {
        cout << "Scholarship amount: " << scholarship << endl;
    } else {
        cout << "Scholarship not awarded." << endl;
    }

    return 0;
}
