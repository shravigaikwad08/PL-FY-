#include <iostream>
using namespace std;

inline int sq(int a)
{
    return a * a;
}

inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    cout << "Sq of no = " << sq(5) << endl;
    cout << "Cube of no = " << cube(2) << endl;
    return 0;
}
