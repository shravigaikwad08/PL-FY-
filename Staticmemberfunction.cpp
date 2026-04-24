#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    static void showCount() {
        cout << "Number of Students: " << count << endl;
    }

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;
    Student::showCount();
    return 0;
}
