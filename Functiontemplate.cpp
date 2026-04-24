#include <iostream>
using namespace std;

// Function template
template <typename T>
T multiply(T a, T b) {
    if (a < 0 || b < 0) {
        throw "Negative value not allowed!";
    }
    return a * b;
}

int main() {
    try {
        int x = 5, y = 4;
        cout << "Multiplication (int): " << multiply(x, y) << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    try {
        float a = 2.5, b = -3.0;
        cout << "Multiplication (float): " << multiply(a, b) << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
