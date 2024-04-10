//This C++ program efficiently determines whether a given set of three integer side lengths forms a Pythagorean triplet. It utilizes a function isPythagoreanTriplet to verify if the squares of the side lengths satisfy the Pythagorean theorem. The program prompts the user to input three integer side lengths and then evaluates whether they constitute a Pythagorean triplet. If the conditions are met, the program outputs "TRUE"; otherwise, it outputs "FALSE". The code is concise and provides a quick assessment of the Pythagorean nature of the input side lengths.

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
