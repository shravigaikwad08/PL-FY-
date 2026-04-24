#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "After Swap: " << x << " " << y << endl;

    float a = 1.5, b = 2.5;
    swapValues(a, b);
    cout << "After Swap: " << a << " " << b << endl;

    return 0;
}
