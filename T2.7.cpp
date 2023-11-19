#include <iostream>
#include <cmath>
using namespace std;
// Define a struct for complex numbers
struct nrComplex {
    float a; // real part
    float b; // imaginary part
};

// Function to compute the absolute value of a real number
float absoluteValue(float x) {
    return fabs(x);
}

// Function to compute the absolute value of a complex number
float absoluteValue(const nrComplex& complexNum) {
    return sqrt(complexNum.a * complexNum.a + complexNum.b * complexNum.b);
}

int main() {
    // Example with a real number
    float realNumber = -3.14;
    cout << "Absolute value of " << realNumber << ": " << absoluteValue(realNumber) << endl;

    // Example with a complex number
    nrComplex complexNumber = { 2.0, -1.5 };
    cout << "Absolute value of complex number (" << complexNumber.a << " + " << complexNumber.b << "i): "
        << absoluteValue(complexNumber) << endl;

    return 0;
}
