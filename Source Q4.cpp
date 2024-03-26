#include <iostream>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c) {
    int maxVal = max(a, max(b, c));

    if (maxVal == a) {
        return a * a == b * b + c * c;
    }
    else if (maxVal == b) {
        return b * b == a * a + c * c;
    }
    else {
        return c * c == a * a + b * b;
    }
}

int main() {
    int side1, side2, hypotenuse;

    cout << "Enter three integer side lengths to check if its Pythagorean triplet: ";
    cin >> side1 >> side2 >> hypotenuse;

    if (isPythagoreanTriplet(side1, side2, hypotenuse)) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    return 0;
}
