#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator*(Complex c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    friend istream& operator>>(istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number (real imag): ";
    cin >> c1;

    cout << "Enter second complex number (real imag): ";
    cin >> c2;

    sum = c1 + c2;
    product = c1 * c2;

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}
