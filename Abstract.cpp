#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with key" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with kick" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();

    return 0;
}
