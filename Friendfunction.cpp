#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    friend void showLength(Box b);
};

void showLength(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box obj(15);
    showLength(obj);
    return 0;
}
