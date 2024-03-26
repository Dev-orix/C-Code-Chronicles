#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original_Num, remainder, n = 0;
    double result = 0.0;

    cout << "Enter a Number: ";
    cin >> num;

    original_Num = num;

    while (original_Num != 0) {
        original_Num /= 10;
        ++n;
    }

    original_Num = num;

    while (original_Num != 0) {
        remainder = original_Num % 10;
        result += pow(remainder, n);
        original_Num /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    }
    else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
