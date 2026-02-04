#include <iostream>
using namespace std;

class copytest
{
public:
    int x;

    copytest(int a)
    {
        x = a;
    }

    copytest(const copytest &obj)
    {
        x = obj.x;
    }
};

int main()
{
    copytest ob1(10);
    copytest ob2(ob1);
    return 0;
}
