#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual void salary() {
        cout << "Employee salary" << endl;
    }
};

// Derived class Manager
class Manager : public Employee {
public:
    void salary() {
        cout << "Manager salary = 80000" << endl;
    }
};

// Derived class Developer
class Developer : public Employee {
public:
    void salary() {
        cout << "Developer salary = 50000" << endl;
    }
};

int main() {
    Employee* e;   // Base class pointer

    Manager m;
    Developer d;

    e = &m;
    e->salary();   // Calls Manager salary()

    e = &d;
    e->salary();   // Calls Developer salary()

    return 0;
}
