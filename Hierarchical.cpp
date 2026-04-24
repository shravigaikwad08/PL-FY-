#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void circle() {
        cout << "This is a circle" << endl;
    }
};

class Square : public Shape {
public:
    void square() {
        cout << "This is a square" << endl;
    }
};

int main() {
    Circle c;
    Square s;

    c.display();
    c.circle();

    s.display();
    s.square();

    return 0;
}
