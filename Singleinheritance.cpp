#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int marks;
    void show() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.name = "Ruturaj";
    s.marks = 85;

    s.display();
    s.show();

    return 0;
}
