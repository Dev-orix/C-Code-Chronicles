#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Check for Pythagorean triple
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        cout << "The given numbers form a Pythagorean triple." << endl;
    }
    else {
        cout << "The given numbers do not form a Pythagorean triple." << endl;
    }

    return 0;
}
