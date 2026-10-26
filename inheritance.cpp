#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int a, int id)
        : Person(n, a) {
        employeeID = id;
    }

    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id, string dept)
        : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m1("Norah", 21, 102, "Engineering");

    cout << "MANAGER DETAILS" << endl;
    m1.displayManager();

    cout << "\nINHERITED MEMBERS" << endl;
    m1.displayPerson();
    m1.displayEmployee();

    return 0;
}
