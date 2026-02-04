#include <iostream>
using namespace std;

class Addition {
private:
    int a, b;

public:
    void setValues(int x, int y) {
        a = x;
        b = y;
    }

    inline int add() {
        return a + b;
    }
};

int main() {
    Addition obj;
    obj.setValues(10, 20);
    cout << "Addition = " << obj.add();
    return 0;
}
