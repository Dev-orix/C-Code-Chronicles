//This C++ program acts as an analyzer, determining whether a given number is an Armstrong number or not. Employing a systematic approach based on the Armstrong number definition, it calculates the sum of the digits raised to the power of the number of digits and compares it with the original number. By illuminating the presence of Armstrong numbers, it offers insights into the intriguing world of numerical properties.

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
