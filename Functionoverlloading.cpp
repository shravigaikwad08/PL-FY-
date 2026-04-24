#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Int Addition: " << m.add(5, 3) << endl;
    cout << "Float Addition: " << m.add(2.5f, 1.5f) << endl;
    return 0;
}
